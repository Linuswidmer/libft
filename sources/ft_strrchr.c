#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  char *temp;
  size_t i;

  temp = NULL;
  i = 0;
  while (i <= ft_strlen(s)) 
  {
    if (((char*)s)[i] == c)
    {
      temp = (char*)s + i;
    }
    i++;
  }
  return(temp);
}
