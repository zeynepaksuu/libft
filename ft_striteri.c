void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void my_iter_func(unsigned int i, char *c)
{
    // indeks tek ise harfi buyutcez
    if (i % 2 != 0 && (*c >= 'a' && *c <= 'z'))
        *c = *c - 32;
}
int main(void)
{
    // salt okunur bir dize (char *str = "abc") kullanılamazmıs
    // striteri dizeyi degistirmeye calisiyor. bellekte yeni bir dize accaz
    char metin[] = "merhaba"; 

    printf("girilen : %s\n", metin);
    
    ft_striteri(metin, my_iter_func);
    
    printf("cıktı : %s\n", metin);
}
*/