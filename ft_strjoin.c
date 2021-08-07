#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	while (*s1)
	{
		join[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		join[i++] = *s2;
		s2++;
	}
	if (!join)
		return (NULL);
	join[i] = '\0';
	return (join);
}