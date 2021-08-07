#include "libft.h"
// #include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newsub;
	size_t	i;

	newsub = (char*) malloc(sizeof(*s) * (len + 1));
	if (!newsub)
		return (newsub);
	i = 0;
	while (s[start] && i < len)
		newsub[i++] = s[start++];
	newsub[i] = '\0';
	return (newsub);
}

// int main()
// {
// 	printf("%d\n", strcmp(ft_substr("tripouille", 1, 1), "r"));
// 	printf("%d\n", strcmp(ft_substr("tripouille", 100, 1), ""));
	// printf("%s\n", ft_substr("1", 42, 42000000));
	// printf("%s\n", ft_substr("0123456789", 9, 10));
	// printf("%s\n", ft_substr("42", 0, 0));
// }