void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		
		lst = lst->next;
	}
}

/*
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;

//contenti yazdıralım
void print_content(void *content) {
    printf("deneme: %s\n", (char *)content);
}

int main(void) {
    t_list *liste = ft_lstnew("kaju");
    ft_lstadd_back(&liste, ft_lstnew("badem"));
    ft_lstadd_back(&liste, ft_lstnew("fındık"));

    ft_lstiter(liste, print_content);
    return (0);
}
*/