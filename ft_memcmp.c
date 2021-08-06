#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	i = 0;
	if (!s1_ptr)
		return (-1);
	else if (!s2_ptr)
		return (1);
	while (i < n)
	{
		if (s1_ptr[i] > s2_ptr[i])
			return (1);
		else if (s1_ptr[i] < s2_ptr[i])
			return (-1);
		i++;
	}
	return (0);
}
