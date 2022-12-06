#include "libft.h"

void	print(int nb, int fd)
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
	if (nb == -2147483648)
		write(fd, "-2147483648", 12);
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * (-1);
		print(nb, fd);
	}
	else if (nb == 0)
	{
		write(fd, "0", 1);
	}
	else
	{
		print(nb, fd);
	}
}
