#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <strings.h>


char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *ptr;

  ptr = malloc(len);
  bzero(ptr, len);
  strlcpy(ptr, s + start, len);
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
  end = strlen(s1) - 1;
  while (i < strlen(s1))
  {
    j = 0;
    while(j < strlen(set))
    {
      if(strncmp((s1 + i), (set + j), 1) == 0)
      {
        beginning++;
        break;
      }
      else
      {
        j++;
      }
    }
    if (j == strlen(set))
    {
      break;
    }
    i++;
  }
  
  while (end >= 0)
  {
    j = 0;
    while (j < strlen(set)) 
    {
      if(strncmp((s1 + end), (set + j), 1) == 0)
      {
        end--;
        break;
      }
      else
      {
        j++;
      }
    }
    if (j == strlen(set))
    {
      break;
    }
    i++;
  }

  ptr = ft_substr(s1, beginning, end);
  return(ptr);
}

int main()
{
  char *ptr;

  ptr = ft_strtrim("Hello World!", "Hlde");
  printf("%s\n", ptr);
  free(ptr);
}
