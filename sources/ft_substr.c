#include <bsd/string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  char *ptr;

  ptr = malloc(len);
  bzero(ptr, len);
  strlcpy(ptr, s + start, len);
  return(ptr);
}

int main()
{
  char s1[] = "hello worlds";
  char *ptr;

  ptr = ft_substr(s1, 5, 7);
  printf("%s\n", ptr);
}
