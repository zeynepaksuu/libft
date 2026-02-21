int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
int main(void)
{
    printf("%c\n", ft_toupper('b'));
    printf("%c\n", ft_toupper('A'));
    printf("%c\n", ft_toupper('4'));
    printf("%c\n", ft_toupper('!'));
}
*/