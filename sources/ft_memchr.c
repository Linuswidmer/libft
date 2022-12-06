#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;

  i = 0;
  if(s)
  {
    while (i < n) {
      if((*(char*)s) == c)
        return ((void*)s);
      (char*)s++;
      i++;
    }
  }
  return(NULL);
}
