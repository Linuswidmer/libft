#include "libft.h"

void *ft_calloc(size_t nmeb, size_t size)
{
  void *ptr;
  int i;

  i = 0;
  if(size != 0 && nmeb > 2147483647 / size)
    return(0);
  if(nmeb != 0 && size > 2147483647 / nmeb)
    return(0);
  ptr = malloc(nmeb * size); // malloc returns a pointer value if one of the two is 0
  if (ptr)
  {
    ft_bzero(ptr, nmeb * size);
    return(ptr);
  }
  return (ptr);
}
