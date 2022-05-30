/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 05:25:27 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/31 02:09:42 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s) + 1;
	while (len_s > 0)
	{
		if (s[len_s - 1] == (unsigned char)c)
			return ((char *)&s[len_s - 1]);
		len_s--;
	}
	return (NULL);
}
