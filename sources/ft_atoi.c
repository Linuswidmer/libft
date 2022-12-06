#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
		if (c >= 48 && c <= 57)
			return (1);
	  else
      return (0);
}


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
  while (ft_isdigit(nptr[i])) 
  {
      n = n * 10;
      n = n + nptr[i] - 48;
      i++;
  }
  return(n * neg);
}

int main()
{
  printf("%i\n", atoi("2147483647"));
  printf("%i\n", ft_atoi("2147483647"));
}
