int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "abcdef";
	char *s2 = "abcdez";

	printf("%d\n", ft_memcmp(s1, s2, 6));
	printf("%d\n", ft_memcmp(s1, s2, 5)); 
	
	int n1[] = {1, 2, 0, 4};
	int n2[] = {1, 2, 0, 5};
	printf("%d\n", ft_memcmp(n1, n2, sizeof(int) * 4));
	
	return (0);
}
*/