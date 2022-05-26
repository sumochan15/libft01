/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:10:44 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/26 21:09:17 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*us_s1;
	char	*us_s2;
	size_t	i;

	us_s1 = (char *)s1;
	us_s2 = (char *)s2;
	i = 0;
	while (i < n && (us_s1[i] || us_s2[i]))
	{
		if (us_s1[i] != us_s2[i])
			return (us_s1[i] - us_s2[i]);
		i++;
	}
	return (0);
}
