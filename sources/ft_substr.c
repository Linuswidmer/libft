// #include <bsd/string.h>
// #include <strings.h>
// #include <stdio.h>
// #include <stdlib.h>

#include "libft.h"

// size_t ft_strlen(const char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }
//
// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t index;
//
//   printf("%ld\n", ft_strlen(dest));
// 	index = 0;
// 	if (size == 0 )
// 		return (ft_strlen(src));
// 	else
// 	{
// 		// while (index < (ft_strlen(dest) - 1) && index < (size - 1))
// 		while (index < (size - 1) && src[index] != '\0')
// 		{
// 			dest[index] = src[index];
// 			index++;
// 		}
//   //   while (dest[index] != '\0' && index < size) 
//   //   {
//   //    index++; 
//   //   }
// 		dest[index] = '\0';
// 		return (ft_strlen(src));
// 	}
// }

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *ptr;

  if(start >= ft_strlen(s))
  {
    ptr = malloc(1);
    ft_bzero(ptr, 1);
    if(!ptr)
      return(NULL);
    return(ptr);
  }
  ptr = malloc(len + 1);
  if(!ptr)
    return(NULL);
  ft_bzero(ptr, len); //could also be done with ft_calloc
  ft_strlcpy(ptr, s + start, len + 1);
  return(ptr);
}

// int main()
// {
//   char s1[] = "lorem ipsum dolor sit amet";
//   char *ptr;
//
//   ptr = ft_substr(s1, 7, 10);
//   printf("%s\n", ptr);
//   free(ptr);
// }
