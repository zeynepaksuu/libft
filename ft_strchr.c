char *ft_strchr(const char *s, int c)
{
    unsigned int i;
    char charc;
    
    charc = (char) c;
    i = 0;
    
    while (s[i])
    {
        if (s[i] == charc) {
            return ((char*) &s[i]);
        }
        i++;
    }

    if(s[i] == charc)
    {
        return ((char *) &s[i]);
    }
    
    return (NULL);
}

/*
int main()
{
    char dize[] = "deneme";
    char *sonuc;

    sonuc = ft_strchr(dize, 'h');
    if (sonuc != NULL) 
    {
        printf("%s\n", sonuc);
    }
    else 
    {
        printf("xn");
    }
    sonuc = ft_strchr(dize, 'z');
    if (sonuc != NULL) 
    {
        printf("%s\n", sonuc);
    }
    else 
    {
        printf("x\n");
    }
    sonuc = ft_strchr(dize, '\0');
    if (sonuc != NULL)
    {
        printf("null");
    }
}
*/