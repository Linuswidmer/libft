#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
  int i;

  i = 0;
  while (*s != '\0') {
    if (*s == c)
    {
      return ((char*)s);
    }
    s++;
  }
  return(NULL);
}

int main()
{
  char str[] = "hello world";

  printf("%s\n", ft_strchr(str, 'x'));

}
