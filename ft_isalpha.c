int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*

#include <stdio.h>

int main(void)
{
    printf("z: %d\n", ft_isalpha('z'));
    printf("M: %d\n", ft_isalpha('M'));
    printf("%d\n", ft_isalpha('1'));
    printf("%d\n", ft_isalpha('@'));
    printf(" %d\n", ft_isalpha('['));
    return (0);
}
*/