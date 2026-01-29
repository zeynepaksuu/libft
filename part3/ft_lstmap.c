t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
// büyük harf
void *test_map(void *content) {
    return (strdup("deneEme")); 
}

void del_content(void *content) {
    free(content);
}

int main(void) {
    t_list *eski_liste = ft_lstnew(strdup("Eski 1"));
    ft_lstadd_back(&eski_liste, ft_lstnew(strdup("Eski 2")));

    t_list *yeni_liste = ft_lstmap(eski_liste, test_map, del_content);

    t_list *tmp = yeni_liste;
    while (tmp) {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
	//eskilerine clear atcas
    ft_lstclear(&eski_liste, del_content);
    ft_lstclear(&yeni_liste, del_content);
    return (0);
}
*/