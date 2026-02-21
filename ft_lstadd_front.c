void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
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
    t_list  *yeni;

    yeni = ft_lstnew("selam");
    ft_lstadd_front(&liste, yeni);

    yeni = ft_lstnew("len");
    ft_lstadd_front(&liste, yeni);

    t_list *gecici = liste;
    while (gecici)
    {
        printf("%s -> ", (char *)gecici->content);
        gecici = gecici->next;
    }
    printf("NULL\n");

    return (0);
}
*/