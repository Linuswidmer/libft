// #include "libft.h"
#include <stdio.h>
#include <string.h>

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
			  if((*(char*)s1 > *(char*)s2))
			    return (1);
        else 
          return(-1);
		  }
	  }
	  // if (i == n || *(char*)s1 == '\0' || *(char*)s2 == '\0')
	  if (i == n) 
	  {
		  return (0);
	  }
	  if((*(char*)s1 > *(char*)s2))
	    return (1);
    else
      return(-1);
  }
  else
    return(0);
}

int main()
{
  printf("%i\n", ft_memcmp("t\200", "t\0", 2));
  printf("%i\n", memcmp("t\200", "t\0", 2));
}
