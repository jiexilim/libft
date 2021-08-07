#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	char	*dup;

	if (!needle)
		return ((char *) haystack);
	i = 0;
	dup = malloc(size * sizeof(char));
	ft_strlcpy(dup, haystack, size);
	while (dup[i] && i < size)
	{
		if ((dup[i] == needle[0])
			&& !ft_strncmp(&dup[i], needle, ft_strlen(needle)))
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
