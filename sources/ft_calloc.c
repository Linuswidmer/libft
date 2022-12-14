#include "libft.h"

void *ft_calloc(size_t nmeb, size_t size)
{
  void *ptr;

  if(size != 0 && nmeb > 2147483647 / size)
    return(0);
  if(nmeb != 0 && size > 2147483647 / nmeb)
    return(0);
  ptr = malloc(nmeb * size);
  if (ptr)
  {
    ft_bzero(ptr, nmeb * size);
    return(ptr);
  }
  return (ptr);
}
