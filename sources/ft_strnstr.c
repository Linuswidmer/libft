#include "libft.h"


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

