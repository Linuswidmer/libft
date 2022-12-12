#include "libft.h"
// #include <stdio.h>
// #include <bsd/string.h>
// #include <unistd.h>
//
// size_t ft_strlen(const char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

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
    result = ft_strlen(src) + size;
		
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


// int main()
// {
// 	char	*dest;
//   int i;
//
//   i = 0;
// 	// memset(dest, 0, 15);
// 	// memset(dest, 'r', 6);
// 		// dest[0] = '\0';
// 		// dest[11] = 'a';
//   // dest[14] = 'a';
// 	memset(dest, 'r', 15);
//   printf("%li\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
//   write(1,dest,15);
//
//   // while(i <= 15)
//   // {
//   //     printf("%c", dest[i]);
//   //     i++;
//   // }
//   // printf("\n");
// }
