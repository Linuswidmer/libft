#include "libft.h"
// #include <stdio.h>
// #include <bsd/string.h>

// size_t ft_strlen(const char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t index;

	index = 0;
	if (size == 0 )
		return (ft_strlen(src));
	else
	{
		// while (index < (ft_strlen(dest) - 1) && index < (size - 1))
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
  //   while (dest[index] != '\0' && index < size) 
  //   {
  //    index++; 
  //   }
		dest[index] = '\0';
		return (ft_strlen(src));
	}
}
// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t index;
//
// 	index = 0;
// 	if (size == 0 )
// 	{
// 		return (ft_strlen(src));
// 	}
// 	else
// 	{
// 		while (index < (ft_strlen(dest) - 1) && index < (size - 1) && src[index] != '\0')
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

// int main()
// {
//   char *dest;
//   char *dest2;
//   char *dest3;
//   int i;
//
//   i = 0;
// 	memset(dest, 'c', 15);
// 	memset(dest, 'r', 6);
// 	// memset(dest3, 'c', 15);
// 	// memset(dest3, 'r', 6);
//
//   printf("%s\n", dest);
//   // strlcpy(dest, "", 15);
//   // printf("%i\n", ft_strlcpy(dest, "", 15));
//   printf("%i\n", strlcpy(dest, "lorem ipsum dolor sit amet", 15));
//   while(i <= 15)
//   {
//       printf("%c", dest[i]);
//       i++;
//   }
//   printf("\n");
//   printf("%s\n", dest);
// }
