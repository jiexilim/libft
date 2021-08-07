#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	
	if (!*needle)
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < size)
	{
		if ((haystack[i] == needle[0])
			&& !ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
