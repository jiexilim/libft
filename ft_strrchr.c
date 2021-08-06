#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if (!c)
		return ((char *) &s[i + 1]);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
