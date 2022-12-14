#include "libft.h"

int return_fun(int c1, int c2)
{
  if (c1 < 0)
    c1 = c1 * -1;
  if(c2 < 0)
    c2 = c2 * -1;
  return(c1 -c2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
        return(return_fun(s1[i], s2[i]));
	}
	if (i == n)
		return (0);
  return(return_fun(s1[i], s2[i]));
}
