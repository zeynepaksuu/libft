char *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char charc;
    char *lst;
    
    charc = (char) c;
    i = 0;
    lst = NULL;
    while (s[i])
    {
        if (s[i] == charc) {
            lst = ((char*) &s[i]);
        }
        i++;
    }

    if(s[i] == charc)
    {
        lst = ((char *) &s[i]);
    }
    
    return (lst);
}

/*
int main()
{
    char dize[] = "deneme";
    char *sonuc;
    sonuc = ft_strrchr(dize, 'a');
    if (sonuc != NULL)
        printf("\n", sonuc);
    else
        printf("x\n");
    sonuc = ft_strrchr(dize, 'z');
    if (sonuc != NULL)
        printf("%s\n", sonuc);
    else
        printf("x");
}
*/