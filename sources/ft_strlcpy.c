#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t index;

	index = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	else
	{
		while (index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (ft_strlen(src));
	}
}
