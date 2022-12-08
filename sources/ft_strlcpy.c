#include "libft.h"
// #include <stdio.h>
// #include <bsd/string.h>

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
		while (index < ft_strlen(dest) && index < size)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (ft_strlen(src));
	}
}

// int main()
// {
//   char *dest;
//   char *dest2;
//   int i;
//
//   i = 0;
// 	memset(dest, 'c', 15);
// 	memset(dest, 'r', 6);
// 	// memset(dest2, 0, 15);
// 	// memset(dest2, 'r', 6);
//
//   printf("%s\n", dest);
//   ft_strlcpy(dest, "lorem", 15);
//   // printf("%i%s\n", ft_strlcpy(dest, "lorem", 15), dest);
//   // printf("%i%s\n", strlcpy(dest, "lorem", 15), dest);
//   while(i <= 15)
//   {
//       printf("%c", dest[i]);
//       i++;
//   }
// }
