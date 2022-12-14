#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *ptr;
  size_t i;
  size_t j;

  j = 0;
  i = 0;
  ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
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
