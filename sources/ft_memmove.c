#include "libft.h"

void *ft_memmove (void *dest, const void *src, size_t n)
{
  if(dest && src)
  {
    while (n-- > 0)
      ((char*)dest)[n] = ((char*)src)[n];
  }
  return (dest);
}

