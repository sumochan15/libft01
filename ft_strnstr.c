/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorimot <ymorimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:39:33 by ymorimot          #+#    #+#             */
/*   Updated: 2022/06/04 02:05:16 by ymorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)&haystack[0]);
	i = 0;
	while (i + needle_len <= len && haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char	*haystack = "12354abc456def";
	// const char	*haystack = "\0";
	const char	*needle = "54abc456def";
	size_t		len = 10;
	char *test1 = ft_strnstr(haystack, needle, len);
	char *test2 = strnstr(haystack, needle, len);

	printf("%-13s | %-10s\n", "ft_strnstr", test1);
	printf("%-13s | %-10s\n", "libc_strnstr", test2);
}
*/