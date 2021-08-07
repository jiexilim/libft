#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	s1_ptr = (unsigned char *) s1;
	s2_ptr = (unsigned char *) s2;
	i = 0;
	if (!s1_ptr || !s2_ptr)
		return (NULL);
	while (i < n)
	{
		if (s1_ptr[i] != s2_ptr[i])
			return (s1_ptr[i] - s2_ptr[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	size_t size = 8;
	printf("%d\n", memcmp(s1, s2, size));
	printf("%d\n", ft_memcmp(s1, s2, size));
}


