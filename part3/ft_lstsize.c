int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

int main(void)
{
    t_list  *liste = NULL;

    // eleman ekliyoruz
    ft_lstadd_front(&liste, ft_lstnew("Düğüm 1"));
    ft_lstadd_front(&liste, ft_lstnew("Düğüm 2"));
    ft_lstadd_front(&liste, ft_lstnew("Düğüm 3"));

    int result = ft_lstsize(liste);
    
    printf("%d\n", count); // 3

    return (0);
}
*/