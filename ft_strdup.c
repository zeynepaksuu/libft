char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1);

	copy = (char *)malloc(sizeof(char) * (len + 1));

	if (!copy)
		return (NULL);

	ft_memcpy(copy, s1, len + 1);

	return (copy);
}

/*
int main(void)
{
    char *orig = "deneme";
    char *copy;

    copy = ft_strdup(orig);
    if (copy){
    
        printf("%s\n", copy);
        free(copy);
    }
    return (0);
}
*/