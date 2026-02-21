int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        
        if (s1[i] == '\0')
            break;
            
        i++;
    }
    return (0);
}
#include <stdio.h>
int main () {
	char s1[] = "deneme";
	char s2[] = "evet";
	printf("%d", ft_strncmp(s1,s2,4));
}