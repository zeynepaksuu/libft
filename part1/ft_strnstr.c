char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
    char *big = "deneme cümle";
    char *little = "eneme cü";
    char *res;
    res = ft_strnstr(big, little, 20);
    printf("%s\n", res ? res : "NULL");
    res = ft_strnstr(big, little, 10);
    printf(" %s\n", res ? res : "NULL");

    res = ft_strnstr(big, "", 5);
    printf("%s\n", res ? res : "NULL");
}
*/