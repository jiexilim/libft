#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_ptr;

	i = 0;
	s_ptr = (char *) s;
	while (s_ptr[i] && i < n)
	{
		if (s_ptr[i] == c)
		{
			return (&s_ptr[i]);
		}
		i++;
	}
	return (NULL);
}
