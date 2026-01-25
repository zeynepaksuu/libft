void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    if ((src == NULL) && (dest==NULL))
    {
       return (NULL);
    }
     while(i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
        return (dest);
}

/*
int main()
{
    char s1[] = "deneme";
    char d1[20];
    ft_memcpy(d1, s1, 7); // Null dahil 11 karakter
    printf("%s", d1);

    int s2[] = {10, 20, 30};
    int d2[3];
    ft_memcpy(d2, s2, sizeof(int) * 3);
    printf("%d, %d, %d", d2[0], d2[1], d2[2]);

    return 0;
}
*/
