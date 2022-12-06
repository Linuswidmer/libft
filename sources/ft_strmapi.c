#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  size_t i;
  size_t len;
  char *ptr;

  i = 0;
  len = ft_strlen(s);
  ptr = malloc(len + 1);
  if(!ptr)
    return(0);
  while(s[i] != '\0')
  {
    ptr[i] = f(i, s[i]);
    i++;
  }
  ptr[i] = '\0';
  return(ptr);
}

