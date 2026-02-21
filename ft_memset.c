void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    i = 0;

    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

/*
int main ()
{
    char str[10] = "123456789";
    ft_memset(str, 'A', 5);
    printf("%s", str);
*/