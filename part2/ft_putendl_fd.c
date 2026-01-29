void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int main(void)
{
	char *str = "deneme";
	
	ft_putendl_fd(str, 1);
	ft_putendl_fd(str, 1);

	return (0);
}
*/