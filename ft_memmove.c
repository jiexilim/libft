#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	char		*src_ptr;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	if (dest_ptr > src_ptr)
	{
		while (n--)
			dest_ptr[len] = src_ptr[len];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
