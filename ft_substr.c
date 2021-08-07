#include "libft.h"
// #include <stdio.h>
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*newsub;
// 	size_t	i;

// 	newsub = (char *) malloc(sizeof(*s) * (len + 1));
// 	if (!newsub)
// 		return (newsub);
// 	i = 0;
// 	while (s[start] && i < len)
// 		newsub[i++] = s[start++];
// 	newsub[i] = 0;
// 	return (newsub);
// }

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*temp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > len)
	{
		if ((temp = malloc(1)) == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	if ((temp = ft_calloc((len + 1), sizeof(char))) == NULL)
		return (NULL);
	while (start < (unsigned int)len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}


// int main()
// {
// 	printf("%s\n", ft_substr("tripouille", 100, 1));
// 	printf("%s\n", ft_substr("1", 42, 42000000));
// 	printf("%s\n", ft_substr("0123456789", 9, 10));
// 	printf("%s\n", ft_substr("42", 0, 0));
// }