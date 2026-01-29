static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	**free_all(char **howm, int i)
{
	while (i >= 0)
		free(howm[i--]);
	free(howm);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**howm;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	howm = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!howm)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			howm[i++] = ft_substr(s, 0, len);
			if (!howm[i - 1])
				return (free_all(howm, i - 2));
			s += len;
		}
	}
	howm[i] = NULL;
	return (howm);
}


/*
int main(void)
{
    char    *str = "  --deneme-test-bir-ki-uc  ";
    char    **tablo;
    int     i;

    i = 0;
    tablo = ft_split(str, '-');
    
    if (!tablo)
    {
        printf("x\n");
        return (1);
    }

    while (tablo[i] != NULL)
    {
        printf("%d: [%s]\n", i, tablo[i]);
        free(tablo[i]);
        i++;
    }
    free(tablo);
    return (0);
}
*/