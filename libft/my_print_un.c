
#include "libft.h"

int	my_print_un(unsigned int n)
{
	int		i;
	char	*s;

	i = 0;
	s = my_utoa_base(n, 10, "0123456789");
	i = my_print_string(s);
	free (s);
	return (i);
}
