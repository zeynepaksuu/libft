void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
int main(void)
{
	char *mesaj = "deneme";
	char *hata = "HATA";

	// 1
	ft_putstr_fd(mesaj, 1);
	write(1, "\n", 1);

	// 2
	// ekranda aynı görünebilir ama sisteme farklı kaydediliyor
	ft_putstr_fd(hata, 2);
	write(1, "\n", 1);

	// 3(nullicin)
	ft_putstr_fd(NULL, 1);
}
*/