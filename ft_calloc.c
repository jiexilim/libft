#include "libft.h"

void	*calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * elsize);
	return (ptr);
}
