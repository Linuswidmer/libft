
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i]  == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char*)big + i - j);
		}
		j = 0;
		i++;
	}
	return(NULL);
}

int main()
{
  char str1[] = "in this little string i want to find";
  char str2[] = "to";

  printf("%s\n", ft_strnstr(str1, str2, 30));
  // printf("%s\n", strnstr(str1, str2, 30));
}
