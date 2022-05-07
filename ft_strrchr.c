/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 05:25:27 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/07 05:28:26 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = (unsigned char)ft_strlen(s);
	if (len_s == 0)
		return (NULL);
	while (len_s > 0)
	{
		if ((unsigned char)s[len_s - 1] == (unsigned char)c)
			return ((char *)&s[len_s - 1]);
		len_s--;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len + 1);
}
