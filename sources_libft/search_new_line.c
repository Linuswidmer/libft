#include "libft.h"

size_t	search_new_line(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\n' && i < ft_strlen(s))
		i++;
	return (i);
}
