
#include "libft.h"

static	int	my_counter(long nbr, int base)
{
	int	counter;

	counter = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		counter++;
	}
	else if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / base;
		counter++;
	}
	return (counter);
}

static int	my_is_negative(long *n)
{
	if (*n < 0)
	{
		*n = -*n;
		return (1);
	}
	return (0);
}

char	*my_itoa_base(int n, int base, char *s)
{
	char	*dest;
	long	nn;
	int		i;
	int		sign;

	nn = n;
	i = my_counter(nn, base);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	sign = my_is_negative(&nn);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = s[(nn % base)];
		nn /= base;
	}
	if (sign == 1)
		dest[0] = '-';
	return (dest);
}
