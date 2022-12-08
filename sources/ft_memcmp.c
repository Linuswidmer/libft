#include "libft.h"

int return_fun(int c1, int c2)
{
  if (c1 < 0)
    c1 = c1 * -1;
  if(c2 < 0)
    c2 = c2 * -1;
  if(c1 > c2)
    return(1);
  else 
    return(-1);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t	i;

	i = 0;
  if(s1 && s2)
  {
	  while (i < n && *(char*)s1 != '\0' && *(char*)s2 != '\0')
	  {
		  if (*(char*)s1 == *(char*)s2)
		  {
			  i++;
        s1 = (char*)s1 + 1;
        s2 = (char*)s2 + 1;
		  }
		  else
		  {
          return(return_fun(*(char*)s1, *(char*)s2));
		  }
	  }
	  // if (i == n || *(char*)s1 == '\0' || *(char*)s2 == '\0')
	  if (i == n) 
	  {
		  return (0);
	  }
    return(return_fun(*(char*)s1, *(char*)s2));
  }
  else
    return(0);
}
