
#include "libft.h"

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
