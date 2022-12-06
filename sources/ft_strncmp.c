#include <string.h>
#include <stdio.h>


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

int main()
{
  char str1[] = "hello";
  char str2[] = "hellx";

  printf("%i\n", strncmp(str1, str2, 5));
  printf("%i\n", ft_strncmp(str1, str2, 5));
}
