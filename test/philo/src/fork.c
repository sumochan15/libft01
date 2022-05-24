#include "../include/philo.h"

void	put_down_fork(t_philo *philo)
{
	if (philo->has_fork_left == true)
	{
		if (philo->philo_number == philo->data->number_of_philo)
			pthread_mutex_unlock(&philo->data->forks_mutex[0]);
		else
			pthread_mutex_unlock \
			(&philo->data->forks_mutex[philo->philo_number]);
		pthread_mutex_lock(&philo->data->shared_mutex);
		philo->has_fork_left = false;
		pthread_mutex_unlock(&philo->data->shared_mutex);
	}
	if (philo->has_fork_right == true)
	{
		pthread_mutex_unlock \
		(&philo->data->forks_mutex[philo->philo_number - 1]);
		pthread_mutex_lock(&philo->data->shared_mutex);
		philo->has_fork_right = false;
		pthread_mutex_unlock(&philo->data->shared_mutex);
	}
}

static int	pickup_left(t_philo *philo)
{
	if (philo->has_fork_left == 0)
	{
		if (philo->philo_number != philo->data->number_of_philo)
		{
			pthread_mutex_lock \
			(&(philo->data->forks_mutex[philo->philo_number]));
			pthread_mutex_lock(&philo->data->shared_mutex);
			philo->has_fork_left = 1;
			pthread_mutex_unlock(&philo->data->shared_mutex);
			if (print_action(philo, "has taken a fork") == 1)
				return (1);
		}
		else if (philo->data->number_of_philo != 1)
		{
			pthread_mutex_lock(&(philo->data->forks_mutex[0]));
			pthread_mutex_lock(&philo->data->shared_mutex);
			philo->has_fork_left = 1;
			pthread_mutex_unlock(&philo->data->shared_mutex);
			if (print_action(philo, "has taken a fork") == 1)
				return (1);
		}
		else
			return (1);
	}
	return (0);
}

static int	pickup_right(t_philo *philo)
{
	if (philo->has_fork_right == 0)
	{
		pthread_mutex_lock \
		(&(philo->data->forks_mutex[philo->philo_number - 1]));
		pthread_mutex_lock(&philo->data->shared_mutex);
		philo->has_fork_right = 1;
		pthread_mutex_unlock(&philo->data->shared_mutex);
		if (print_action(philo, "has taken a fork") == 1)
			return (1);
	}
	return (0);
}

int	pickup_fork(t_philo *philo)
{
	pthread_mutex_unlock(&philo->data->shared_mutex);
	if (philo->data->is_finished == 1)
		return (1);
	if (pickup_right(philo) == 1)
		return (1);
	if (pickup_left(philo) == 1)
		return (1);
	return (0);
}
