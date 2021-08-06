#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (ptr[i] && i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
