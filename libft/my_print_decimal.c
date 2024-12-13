
#include "libft.h"

int	my_print_decimal(int dec)
{
	int		i;
	char	*s;

	i = 0;
	s = my_itoa_base(dec, 10, "0123456789");
	i += my_print_string(s);
	free(s);
	return (i);
}
