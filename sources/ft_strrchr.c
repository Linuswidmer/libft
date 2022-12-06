#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
  int i;
  char *temp;

  while (*s != '\0') {
    if (*s == c)
      temp = (char*)s;
    s++;
  }
  return(temp);
}

int main()
{
  char str[] = "hello world";

  printf("%s\n", ft_strrchr(str, 'l'));

}
