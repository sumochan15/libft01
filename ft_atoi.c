/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 04:56:33 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/25 02:34:26 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

char	*check_sign(char *u_str, int *sign)
{
	if (u_str[0] == '+')
		return (u_str + 1);
	else if (u_str[0] == '-')
	{
		*sign = -1;
		return (u_str + 1);
	}
	else
		return (u_str);
}

int	ft_atoi(const char *str)
{
	char			*u_str;
	int				sign;
	size_t			atoi_num;

	u_str = (char *)str;
	while (ft_is_space(*u_str))
		u_str++;
	sign = 1;
	u_str = check_sign(u_str, &sign);
	atoi_num = 0;
	while (ft_isdigit(*u_str))
	{
		atoi_num = atoi_num * 10 + (*u_str - '0');
		u_str++;
	}
	return ((int)(atoi_num * sign));
}
