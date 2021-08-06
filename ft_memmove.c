#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_ptr;
	char	*src_ptr;
	char	*temp;

	dest_ptr = dest;
	src_ptr = (char *) src;
	temp = malloc(ft_strlen(dest_ptr) * sizeof(char));
	temp = ft_strdup(src_ptr);
	i = 0;
	while (dest_ptr[i] && temp[i] && i < n)
	{
		dest_ptr[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
