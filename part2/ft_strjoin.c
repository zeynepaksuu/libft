char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}


/*
int main(void)
{
    char *d1 = "den eme ";
    char *d2 = "test";
    char *new;

    new = ft_strjoin(d1, d2);

    if (new != NULL)
    {
        printf("%s\n", d1);
        printf("%s\n", d2);
        printf("%s\n", new);
        
        free(new);
    }
    else
    {
        printf("x\n");
    }
    return (0);
}
*/