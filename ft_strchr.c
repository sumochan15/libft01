/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:07:47 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/30 18:49:49 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	size_t	ft_strlen2(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len + 1);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len_s;

	i = 0;
	len_s = ft_strlen2(s);
	while (i < len_s)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
			i++;
	}
	return (NULL);
}
