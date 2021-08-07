#include "libft.h"
// #include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsub;
	size_t	i;

	// if (!s)
	// 	return (NULL);
	// if (len > ft_strlen(s))
	// 	len = ft_strlen(s);
	newsub = (char *) malloc(sizeof(*s) * (len + 1));
	// if (start >= ft_strlen(s))
	// 	return (newsub);
	if (!newsub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		newsub[i++] = s[start++];
	newsub[i] = 0;
	return (newsub);
}

// int main()
// {
// 	printf("%s\n", ft_substr("tripouille", 100, 1));
// 	printf("%s\n", ft_substr("1", 42, 42000000));
// 	printf("%s\n", ft_substr("0123456789", 9, 10));
// 	printf("%s\n", ft_substr("42", 0, 0));
// }