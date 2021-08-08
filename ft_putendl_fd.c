#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return (NULL);
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
