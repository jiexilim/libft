#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsub;
	size_t	i;

	if (start > ft_strlen(s) - 1 || !s)
		return (NULL);
	newsub = malloc(len + 1);
	i = 0;
	while (s[start] && i < len)
		newsub[i++] = s[start++];
	newsub[i] = '\0';
	return (newsub);
}
