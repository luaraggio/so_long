
#include "libft.h"
//#include <stdio.h>

void	*my_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*ss;

	i = 0;
	ss = (char *) s;
	while (i < n)
	{
		if (ss[i] == (char)c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*ss;

	ss = my_memchr("Oi", 0, 2);
	printf("%s", ss);
}*/
