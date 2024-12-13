
#include "libft.h"

int	my_print_lowerx(unsigned int n)
{
	int		i;
	char	*x;

	x = my_utoa_base(n, 16, "0123456789abcdef");
	i = my_print_string(x);
	free(x);
	return (i);
}

int	my_print_upperx(unsigned int n)
{
	int		i;
	char	*x;

	x = my_utoa_base(n, 16, "0123456789ABCDEF");
	i = my_print_string(x);
	free(x);
	return (i);
}
