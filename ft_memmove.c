void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

/*
int main()
{
    char x[10] = "123456789";
    ft_memmove(x + 2, x, 3);
    printf("%s\n",x);

    char s1[] = "deneme";
    char d1[10];
    ft_memmove(d1, s1, 8);
    printf("%s\n", d1);

    char d2[] = "test";
    ft_memmove(d2, s2, 0);
    printf("%s\n", d2);
}
*/