/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:07:47 by ymorimot          #+#    #+#             */
/*   Updated: 2022/05/03 00:13:33 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*check_s;
	char	serch_c;

	check_s = (char *)s;
	serch_c = (char)c;
	while (*check_s != serch_c && *check_s != '\0')
		check_s++;
	if (*check_s == '\0' && serch_c != '\0')
	{
		return (NULL);
	}
	return (check_s);
}