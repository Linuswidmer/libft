#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t  j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		return (ft_strlen(src) + ft_strlen(dest));
	}
	else
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0' && j < size -1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (ft_strlen(src) + ft_strlen(dest));
	}
}

int main()
{
  char src[] = "hello world";
  char dest[11];

  dest[0] = 'x';
  ft_strlcat(dest, src, 11);
  printf("%s\n",dest);
}
