#include "libft.h"

int ft_atoi(const char* nptr)
{
  int i;
  int neg;
  int n;

  n = 0;
  i = 0;
  neg = 1;
  while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)) 
    i++;
  if(nptr[i] == '-')
  {
    neg = -1;
    i++;
  }
  else if(nptr[i] == '+')
    i++;
  while (ft_isdigit(nptr[i])) 
  {
      n = n * 10;
      n = n + nptr[i] - 48;
      i++;
  }
  return(n * neg);
}

