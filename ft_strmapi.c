char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*

char my_map_func(unsigned int i, char c)
{
    // indeks ciftse harfi bir sonraki harfe donustur (a -> b)
    if (i % 2 == 0)
        return (c + 1);
    return (c);
}

int main(void)
{
    char *s = "aaaaa";
    char *result;

    result = ft_strmapi(s, my_map_func);
    if (result)
    {
        printf("Girdi : %s\n", s);
        printf("Sonuc : %s\n", result);
        free(result);
    }
    return (0);
}
*/