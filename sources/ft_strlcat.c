#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t  j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		return (ft_strlen(src) + ft_strlen(dest));
	}
	else
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0' && j < size -1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (ft_strlen(src) + ft_strlen(dest));
	}
}

