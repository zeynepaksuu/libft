t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

/*

//
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

int main(void)
{
    t_list  *dugum;
    char    *metin = "deneme";

    dugum = ft_lstnew(metin);

    if (dugum)
    {
        //(char *) kullanıoz çünkü content void*
        printf("Icerik: %s\n", (char *)dugum->content);
        
        if (dugum->next == NULL)
            printf("null atandı\n");

        free(dugum);
    }
    return (0);
}
*/