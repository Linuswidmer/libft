#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t total_len;
  char *ptr;

  total_len = strlen(s1) + strlen(s2) + 1;
  ptr = malloc(total_len);
  strlcat(ptr, s1, total_len);
  strlcat(ptr, s2, total_len);
  return(ptr);
}

int main()
{
  char s1[] = "hello";
  char s2[] = "world";
  char *ptr;

  ptr = ft_strjoin(s1, s2);
  printf("%s\n", ptr);
}