t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

    ft_lstadd_front(&liste, ft_lstnew("sondu bas"));
    ft_lstadd_front(&liste, ft_lstnew("orta"));
    ft_lstadd_front(&liste, ft_lstnew("bas"));

    t_list *son = ft_lstlast(liste);

    if (son)
        printf("son veri : %s\n", (char *)son->content);
    else
        printf("bos liste\n");

    return (0);
}
*/