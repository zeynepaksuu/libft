void ft_bzero(void *s,  size_t n)
{
    ft_memset(s, 0, n);
}

/*
    size_t i;
    i = 0;

    while (i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
*/


/*
int main()
{
    char x[10] = "deneme";
    
    ft_bzero(x, 3);

    printf("%d\n", x[0]);
    printf("%d\n", x[1]);
    printf("%d\n", x[2]);
    printf("%c\n", x[3]);
    printf("%c\n", x[4]); 

    return 0;
}
*/