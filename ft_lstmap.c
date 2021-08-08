#include "libft.h"
// #include <stdio.h>
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*head;
// 	t_list	*new_ele;

// 	if (!f || !del)
// 		printf("haha");
// 	head = NULL;
// 	while (lst)
// 	{
// 		new_ele = ft_lstnew(f(lst->content));
// 		if (!new_ele)
// 		{
// 			ft_lstclear(&head, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&head, new_ele);
// 		lst = lst->next;
// 	}
// 	return (head);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	if (!(new_elem = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_elem;
	lst = lst->next;
	while (lst)
	{
		if (!(new_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_elem);
	}
	return (new_lst);
}

// #include <stdio.h>
// int main()
// {
// 	void *		lstmap_f(void *content) {
// 		(void) content;
// 		return ("OK");
// 	}
	
// 	t_list *l = ft_lstnew(strdup("1"));
// 	t_list *ret;
// 	l->next = ft_lstnew(strdup("2"));
// 	(l->next)->next = ft_lstnew(strdup("3"));
// 	ret = ft_lstmap(l, lstmap_f, ((void *)0));
// 	// printf("%d\n", strcmp(ret->content, "OK !") && strcmp(ret->next->content, "OK !") 
// 	// 	&& strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") 
// 	// 	&& !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"));
// 	printf("%s\n", (char *)(l->content));
// }

	