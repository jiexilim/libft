#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_ele;

	if (!lst || !del)
		printf("haha");
	head = NULL;
	while (lst)
	{
		new_ele = ft_lstnew(f(lst->content));
		if (!new_ele)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_ele);
		lst = lst->next;
	}
	return (head);
}
