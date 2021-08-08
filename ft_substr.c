#include "libft.h"
// #include <stdio.h>
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
	else if (len > s_len)
	{
		len = s_len;
		newsub = malloc(len - start + 1);
	}
	else
		newsub = malloc(len + 1);
	printf("%ld\n", len - start + 1);
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
// 	char *str = "i just want this part #############";
// 	size_t size = 10;
// 	int ret_size;

// 	printf("%s\n", ft_substr(str, 5, size));
// }