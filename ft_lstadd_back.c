#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		if (!(*lst)->next)
		{
			(*lst)->next = new;
			return ;
		}
		*lst = (*lst)->next;
	}
	*lst = new;
}
