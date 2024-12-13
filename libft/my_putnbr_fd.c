
#include "libft.h"

void	my_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		my_putnbr_fd(n * -1, fd);
	}
	else if (n > 9)
	{
		my_putnbr_fd(n / 10, fd);
		my_putnbr_fd(n % 10, fd);
	}
	else
	{
		a = (n + '0');
		write(fd, &a, 1);
	}
}
