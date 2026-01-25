size_t	ft_strlen(const char *str)
{
	size_t	countl;

	countl = 0;
	while (str[countl] != '\0')
	{
		countl++;
	}
	return (countl);
}

/* 
int main()
{
	char *s = "merhaba";
	size_t len;
	len = ft_strlen(s);
	printf("%zu", len);
}
*/ 