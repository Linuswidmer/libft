// #include <stdio.h>
// #include <stdlib.h>
// #include <bsd/string.h>
// #include <strings.h>
//
// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//   char *ptr;
//
//   ptr = malloc(len);
//   bzero(ptr, len);
//   strlcpy(ptr, s + start, len);
//   return(ptr);
// }

#include "libft.h"

size_t next_sep_pos(char const *str, char c, size_t pos)
{
	while (str[pos] != '\0')
	{
		if (str[pos] == c)
			return (pos);
    pos++;
	}
	return (pos);
}

size_t ft_skip(char const *str, char c, size_t str_pos)
{	
	while (str[str_pos] == c)
		str_pos++;
	return(str_pos);
}

size_t ft_num_elements(char const *str, char c)
{
	size_t i;
	int num_elements;

	i = ft_skip(str, c, 0);
	num_elements = 0;
	while (i < ft_strlen(str))
	{
		i = next_sep_pos(str, c, i);
		if (str[i - 1] != c)
			num_elements++;
		i = ft_skip(str, c, i);
	}
	return (num_elements);

}

char **ft_split(char const *s, char c)
{
  size_t num_elements;
  char **arr;
  size_t i;
  unsigned int str_pos;
  size_t str_length;

  i = 0;
  str_pos = 0;
  if (ft_strlen(s) == ft_skip(s, c, 0))
    return(malloc(sizeof(arr)));
  num_elements = ft_num_elements(s, c);
  // printf("Number of elements is:%li\n", num_elements);
  arr = malloc(sizeof(arr) * (num_elements + 1));
  if(!arr)
    return(NULL);
  while (i < num_elements)
  {
    str_pos = ft_skip(s, c, str_pos);
		// printf("Current string position is: %d\n", str_pos);
    str_length = next_sep_pos(s, c, str_pos) - str_pos;
		// printf("Length of the current string is: %li \n", str_length);
    arr[i] = ft_substr(s, str_pos, str_length + 1);
    str_pos = str_pos + str_length  + 1;
    i++;
  }
  arr[i] = NULL; // have to fix this
  return(arr);
}

// int main()
// {
//   size_t i;
//   char s[] = ",,,hello,,,,this,is,a,test,,,";
//   char **arr;
//
//   i = 0;
//   arr = ft_split(s, ',');
//   while (i < ft_num_elements(s, ',')) 
//   {
//     printf("String number %li is %s\n", i, arr[i]);
//     i++;
//   }
//   i = 0;
//   while (i < ft_num_elements(s, ',')) {
//     free(arr[i]);
//     i++;
//   }
//   free(arr);
// }
