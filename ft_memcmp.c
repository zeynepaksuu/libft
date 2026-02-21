int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char *s1 = "abcdef";
	char *s2 = "abcdez";
	printf("%d\n", ft_memcmp(s1, s2, 6));
	printf("%d\n", ft_memcmp(s1, s2, 5)); 
	int n1[] = {1, 2, 0, 4};
	int n2[] = {1, 2, 0, 5};
	printf("%d\n", ft_memcmp(n1, n2, sizeof(int) * 4));
}
*/
