void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
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

    // listeye yeni eleman
    ft_lstadd_back(&liste, ft_lstnew("Vagon 1"));

    ft_lstadd_back(&liste, ft_lstnew("Vagon 2"));
    ft_lstadd_back(&liste, ft_lstnew("Vagon 3"));

    t_list *temp = liste;
    while (temp)
    {
        printf("%s -> ", (char *)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

    return (0);
}
*/