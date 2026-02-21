void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*way;
	unsigned char	who;
	size_t			i;

	way = (unsigned char *)s;
	who = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (way[i] == who)
		{
			return ((void *)(way + i));
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*str = "zaksu";
	char	*res1 = ft_memchr(str, 'm', 3);
	if (res1)
		printf("%s\n", res1);
	else
		printf("x\n");
	char	data[] = {'a', 'b', '\0', 'c', 'd', 'e'};
	char	*res2 = ft_memchr(data, 'd', 6);
	if (res2)
		printf("%ld\n", res2 - data);
	else
		printf("x\n");
	return (0);
}
*/