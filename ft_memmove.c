#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	char		*temp;
	size_t		i;

	dest_ptr = (char *) dest;
	temp = malloc(n * sizeof(char));
	ft_memcpy(temp, src, n);
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
