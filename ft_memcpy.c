#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;

	i = 0;
	dest_ptr = dest;
	src_ptr = (char *) src;
	while (dest_ptr[i] && src_ptr[i] && i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
