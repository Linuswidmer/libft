#include "libft.h"

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
        (char*)s1++;
        (char*)s2++;
		  }
		  else
		  {
			  return (*(char*)s1 - *(char*)s2);
		  }
	  }
	  if (i == n)
	  {
		  return (0);
	  }
	  return (*(char*)s1 - *(char*)s2);
  }
  else
    return(0);
}

