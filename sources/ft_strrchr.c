char *ft_strrchr(const char *s, int c)
{
  char *temp;

  while (*s != '\0') {
    if (*s == c)
      temp = (char*)s;
    s++;
  }
  return(temp);
}
