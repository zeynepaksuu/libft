void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;

void del_func(void *content) {
    free(content);
}

int main(void) {
    t_list *bas = ft_lstnew(strdup("Vagon 1"));
    ft_lstadd_back(&bas, ft_lstnew(strdup("Vagon 2")));
    ft_lstadd_back(&bas, ft_lstnew(strdup("Vagon 3")));

    printf("önce: %p\n", bas);
    ft_lstclear(&bas, del_func);

    printf("sonra: %p\n", bas); // \0

    return (0);
}
*/