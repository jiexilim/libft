#include "libft.h"

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*s1_ptr;
// 	unsigned char	*s2_ptr;

// 	s1_ptr = (unsigned char *) s1;
// 	s2_ptr = (unsigned char *) s2;
// 	i = 0;
// 	if (!s1_ptr || !s2_ptr)
// 		return (0);
// 	while (i < n)
// 	{
// 		if (s1_ptr[i] != s2_ptr[i])
// 			return (s1_ptr[i] - s2_ptr[i]);
// 		i++;
// 	}
// 	return (0);
// }

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;

	if (s1 == s2 || n == 0)
		return (0);
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (n)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}

