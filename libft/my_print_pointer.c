
#include "libft.h"

int	my_print_pointer(void *pointer)
{
	int				i;
	char			*p;
	unsigned long	pt;

	pt = (unsigned long) pointer;
	if (pt == 0)
		return (my_print_string("(nil)"));
	i = 0;
	p = my_utoa_base(pt, 16, "0123456789abcdef");
	i += my_print_string("0x");
	i += my_print_string(p);
	free (p);
	return (i);
}
