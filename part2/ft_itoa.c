static int	findlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = findlen(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

/*
int main(void)
{
    int     sayi1 = 1234;
    int     sayi2 = -567;
    int     sayi3 = -2147483648;
    char    *res;
    res = ft_itoa(sayi1);
    printf("%s\n", res);
    free(res);
    res = ft_itoa(sayi2);
    printf("%s\n", res);
    free(res);
    res = ft_itoa(sayi3);
    printf("%s\n", res);
    free(res);
    return (0);
}
*/