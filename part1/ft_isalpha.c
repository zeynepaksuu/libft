int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int	main(void)
{
	//1
	printf("%d%d)", ft_isalpha('a'), isalpha('a') != 0);
	printf("%d%d)", ft_isalpha('Z'), isalpha('Z') != 0);
	//0
	printf("%d", ft_isalpha('1'), isalpha('1') != 0);
	printf("%d", ft_isalpha('@'), isalpha('@') != 0);
	//sınır
	printf("%d", ft_isalpha('['));
	printf("%d", ft_isalpha('`'));
	printf("%d", ft_isalpha('{'));
	//->
	printf("%d", ft_isalpha(200));
	return (0);
}
*/
