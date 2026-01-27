char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
        
	if (len > slen - start)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
int main(void)
{
    char *dizi = "deneme test";
    char *sonuc;

    sonuc = ft_substr(dizi, 8, 5);
    printf("%s\n", sonuc);
    free(sonuc);

    sonuc = ft_substr(dizi, 50, 5);
    printf("%s\n", sonuc);
    free(sonuc);

    sonuc = ft_substr(dizi, 8, 100);
    printf("%s\n", sonuc);
    free(sonuc);

    return (0);
}
*/