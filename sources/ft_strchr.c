#include "libft.h"
// #include <string.h>
// #include <stdio.h>

char *ft_strchr(const char *s, int c)
{
  size_t i;

  i = 0;
  while (i <= ft_strlen(s)) {
    if (((char*)s)[i] == c)
    {
      return (((char*)s) + i);
    }
    i++;
  }
  return(NULL);
}

