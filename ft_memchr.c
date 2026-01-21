
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "zaksu";
	char	*res1 = ft_memchr(str, 'm', 3);

	//string
	if (res1)
		printf("Bulunan karakterden itibaren: %s\n", res1);
	else
		printf("Karakter bulunamadi.\n");

	// 0
	char	data[] = {'a', 'b', '\0', 'c', 'd', 'e'};
	char	*res2 = ft_memchr(data, 'd', 6);

	//null iceren
	if (res2)
		printf("'d' karakteri bulundu! Adres farki: %ld\n", res2 - data);
	else
		printf("Karakter bulunamadi.\n");
	return (0);
}