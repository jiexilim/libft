#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsub;
	size_t	i;

	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return ("\0");
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	newsub = (char *) malloc(sizeof(*s) * (len - start + 1));
	if (!newsub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		newsub[i++] = s[start++];
	newsub[i] = '\0';
	return (newsub);
}
