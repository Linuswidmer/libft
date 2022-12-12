#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <strings.h>

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
		{
			i++;
		}
		else
		{
        return(return_fun(s1[i], s2[i]));
		}
	}
	if (i == n)
	{
		return (0);
	}
  return(return_fun(s1[i], s2[i]));
}

size_t ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_bzero(void *s, size_t n)
{
  size_t i;

  i = 0;
  if(s)
  {
    while (i < n) {
      ((char*)s)[i] = '\0';
      i++;
    }
  }
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t index;

	index = 0;
	if (size == 0 )
		return (ft_strlen(src));
	else
	{
		// while (index < (ft_strlen(dest) - 1) && index < (size - 1))
		while (index < (size - 1) && src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
  //   while (dest[index] != '\0' && index < size) 
  //   {
  //    index++; 
  //   }
		dest[index] = '\0';
		return (ft_strlen(src));
	}
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char *ptr;

  if(start >= ft_strlen(s))
  {
    ptr = malloc(1);
    ft_bzero(ptr, 1);
    if(!ptr)
      return(NULL);
    return(ptr);
  }
  ptr = malloc(len + 1);
  if(!ptr)
    return(NULL);
  ft_bzero(ptr, len); //could also be done with ft_calloc
  ft_strlcpy(ptr, s + start, len + 1);
  return(ptr);
}

char *ft_strtrim(char const *s1, char const *set)
{
  size_t i;
  size_t j;
  size_t beginning;
  size_t end;
  char *ptr;

  i = 0;
  beginning = 0;
  end = ft_strlen(s1) - 1;
  while (beginning < ft_strlen(s1))
  {
    j = 0;
    while(j < ft_strlen(set))
    {
      if(ft_strncmp((s1 + beginning), (set + j), 1) == 0)
      {
        beginning++;
        break;
      }
      else
        j++;
    }
    if (j == ft_strlen(set))
      break;
  }
  printf("%i\n", end);
  printf("%i\n", ft_strlen(set));
  while (end > 0)
  {
    j = 0;
    while (j < ft_strlen(set)) 
    {
      if(ft_strncmp((s1 + end), (set + j), 1) == 0)
      {
        end--;
        i++;
        break;
      }
      else
      {
        j++;
      }
    }
    if (j == ft_strlen(set))
    {
      break;
    }
  }

  ptr = ft_substr(s1, beginning, ft_strlen(s1) - i - beginning);
  return(ptr);
}

int main()
{
  char *ptr;
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		// char s1[] = "AAABBBAAAAA";

  ptr = ft_strtrim(s1, "loet");
  printf("%s\n", ptr);
  free(ptr);
}
