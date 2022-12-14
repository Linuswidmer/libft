#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t  j;
  size_t  result;

	i = 0;
	j = 0;
  if(size > ft_strlen(dest))
    result = ft_strlen(src) + ft_strlen(dest);
  else
    return(ft_strlen(src) + size);
  while (dest[i] != '\0')
			i++;
  if(size != 0)
  {
		while (src[j] != '\0' && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
  }
	return (result);
}
