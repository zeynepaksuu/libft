void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
	// 1- ekran
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	// 2- error kanal
	ft_putchar_fd('H', 2);
	ft_putchar_fd('\n', 2);
}
*/