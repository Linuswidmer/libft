#include "libft.h"
// #include <unistd.h>

void	print(unsigned int nb, int fd)
{
	char	printchar;

	if (nb != 0)
	{
		print(nb / 10, fd);
		printchar = (nb % 10) + '0';
		write(fd, &printchar, 1);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
  size_t num;

  if (nb < 0)
	{
		write(fd, "-", 1);
		num = nb * (-1);
		print(num, fd);
	}
	else if (nb == 0)
	{
		write(fd, "0", 1);
	}
	else
		print(nb, fd);
}

// int main()
// {
//   ft_putnbr_fd(-2147483648, 2);
// }
