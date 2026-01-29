void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;

	del(lst->content);

	free(lst);
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;

//standart free
void del_content(void *content) {
    free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void *));

int main(void) {
    t_list *dugum;
    char *str = strdup("deneme");

    dugum = malloc(sizeof(t_list));
    dugum->content = str;
    dugum->next = NULL;

    printf("önce: %s\n", (char *)dugum->content);

    ft_lstdelone(dugum, del_content);

    printf("silindi\n");
    // artık dügüme ulasmaya calısmak hata olcak ama denemek lazım

    return (0);
}
*/