int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int ft_isalnum(int c)
{
    return ((c >= 'a' && c <= 'z')
         || (c >= 'A' && c <= 'Z')
         || (c >= '0' && c <= '9'));
}
*/

/*
//0, 5, a,Z, 12, /, @
int main() {
    printf("%d", ft_isalnum());
} 
*/