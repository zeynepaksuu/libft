size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	i;

	slen = 0;

	while (src[slen])
		slen++;
	if (size == 0)
		return (slen);
	i = 0;

	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

/*
int	main(void)
{
	char	d[10];
	char	*s = "deneme";
	size_t	x;

	x = ft_strlcpy(d, s, 10);
	printf("%s ,%zu \n", d, x);

	char dl[5];
	x = ft_strlcpy(dl, s, 5);
	printf("%s , %zu \n", dl, x);

	char zero[10] = "test";
	x = ft_strlcpy(zero, s, 0);
	printf("%s,%zu \n", zero, x);
}
*/