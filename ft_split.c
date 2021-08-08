#include "libft.h"
// #include <stdio.h>
static size_t	wrd_cnt(char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
			continue ;
		}
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	end;
	char	**arr;
	int		arr_i;
	int		i;

	arr = (char **) malloc(sizeof(char *) * wrd_cnt((char *) s, c) + 1);
	start = 0;
	arr_i = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (start >= ft_strlen(s))
		{
			arr[0] = NULL;
			return (arr);
		}
		end = start;
		while (s[end] && s[end] != c)
			end++;
		arr[arr_i] = malloc(end - start + 1);
		i = 0;
		while (start < end)
			arr[arr_i][i++] = s[start++];
		arr[arr_i++][i] = '\0';
	}
	arr[arr_i] = NULL;
	return (arr);
}

// int main()
// {
// 	char **tab = ft_split("    ", ' ');
// 	// printf("%d\n", tab[0] == NULL);
// }