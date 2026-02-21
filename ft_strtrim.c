static int	here(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	f;
	size_t	l;

	if (!s1 || !set)
		return (NULL);
	f = 0;
	while (s1[f] && here(s1[f], set))
		f++;
	l = ft_strlen(s1);
	while (l > f && here(s1[l - 1], set))
		l--;
	return (ft_substr(s1, f, l - f));
}

/*
int main(void)
{
    char *s1 = "   ---den-eme---   ";
    char *set = " -";
    char *sonuc;
    sonuc = ft_strtrim(s1, set);
    if (sonuc)
    {
        printf("%s\n", sonuc);
        free(sonuc);
    }
    return (0);
}
*/