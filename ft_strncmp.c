#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*us_s1;
	unsigned char	*us_s2;

	us_s1 = (unsigned char *)s1;
	us_s2 = (unsigned char *)s2;

	i = 0;
	while (i < n && (us_s1[i] || us_s2[i]))
	{
		if (us_s1[i] != us_s2[i])
			return (us_s1[i] - us_s2[i]);
		i++;
	}
	return (0);
}

//問題にはunsignedの差を返すとなっているけどプロトタイプは(1)(-1)しか返ってない！？

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%d \n",ft_strncmp("Tr1pouille", "Tr5pouille", 42));
	printf("%d \n",strncmp("Tr1pouille", "Tr5pouille", 42));
	printf("\n");
	printf("%d \n",ft_strncmp("abc", "ABC", 2));
	printf("%d \n",strncmp("abc", "ABC", 2));
	printf("\n");
	printf("%d \n",ft_strncmp("ABC", "abc", 2));
	printf("%d \n",strncmp("ABC", "abc", 2));
	printf("\n");
	printf("%d \n",ft_strncmp("ABC", "ABC", 2));
	printf("%d \n",strncmp("ABC", "ABC", 2));
	printf("\n");
	printf("%d \n",ft_strncmp("ABC", "ABC", 4));
	printf("%d \n",strncmp("ABC", "ABC", 4));
	printf("\n");
	printf("%d \n",ft_strncmp("Tripouille", "Tripouill", 42));
	printf("%d \n",strncmp("Tripouille", "Tripouill", 42));
	printf("\n");
	printf("%d \n",ft_strncmp("1234", "1236", -1));
	printf("%d \n",strncmp("1234", "1236", -1));
	printf("\n");
	printf("%d \n",ft_strncmp("1234", "1236", 4));
	printf("%d \n",strncmp("1234", "1236", 4));
	printf("\n");
	printf("%d \n",ft_strncmp("1234", "1236", 0));
	printf("%d \n",strncmp("1234", "1236", 0));
	printf("\n");
}