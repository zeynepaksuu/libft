size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t srcl;
    size_t destl;
    
    i = 0;
    srcl = 0;
    destl = 0;
    
    while ( src[srcl] != '\0')
    {
        srcl++;
    }
    while (dst[destl] != '\0' && destl < size)
    {
        destl++;
    }

    if (destl == size)
    {
        return (size + srcl);
    }
    
    while (src[i] != '\0' && (destl + i + 1) < size)
    {
       dst[destl + i] = src[i];
       i++;
    }
    dst[destl + i] = '\0';

    return (destl + srcl);
    
}

/*
int main()
{
    char d1[20] = "deneme";
    char *s1 = "test";
    size_t r1 = ft_strlcat(d1, s1, 20);
    printf("%s, %zu\n", d1, r1);
    printf("%d", ft_strlcat(d1, s1, 20));

    char d2[10] = "deneme2";
    size_t r2 = ft_strlcat(d2, s1, 10);
    printf("%s, %zu\n", d2, r2);

    char d3[15] = "deneme3";
    size_t r3 = ft_strlcat(d3, s1, 5);
    printf("%s,%zu\n", d3, r3);
}
*/