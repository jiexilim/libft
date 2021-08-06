#include "libft.h"

static int	in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (in_set((char) s1[start], (char *) set))
		start++;
	while (in_set((char) s1[end], (char *) set))
		end--;
	newstr = malloc(end - start + 2);
	i = 0;
	while (start <= end)
		newstr[i++] = s1[start++];
	newstr[i] = '\0';
	return (newstr);
}
