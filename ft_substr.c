#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > len || start > s_len)
	{
		newsub = malloc(1);
		newsub[0] = '\0';
		return (newsub);
	}
	if (len > s_len)
		len = s_len;
	newsub = malloc(len - start + 1);
	if (!newsub)
		return (newsub);
	i = 0;
	while (s[start] && i < len)
		newsub[i++] = s[start++];
	newsub[i] = '\0';
	return (newsub);
}
