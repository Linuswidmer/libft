// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>

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


char *ft_strjoin(char const *s1, char const *s2)
{
  size_t total_len;
  char *ptr;
  size_t i;
  size_t j;


  j = 0;
  i = 0;
  total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
  ptr = malloc(total_len);
  if(!ptr)
    return (NULL);

  while (s1[j] != '\0') {
    ptr[i] = s1[j];
    j++;
    i++;
  }
  j = 0;
  while (s2[j] != '\0') {
    ptr[i] = s2[j];
    j++;
    i++;
  }
  ptr[i] = '\0';
  return(ptr);
}

// int main()
// {
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	char	*ptr;
//
//   ptr = ft_strjoin(s1, s2);
//   printf("%s\n", ptr);
// }
