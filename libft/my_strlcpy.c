
#include "libft.h"
//#include <stdio.h>

size_t	my_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	i = 0;
	srcc = (char *) src;
	dstt = dst;
	if (size == 0)
		return (my_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dstt[i] = srcc[i];
		i++;
	}
	dstt[i] = '\0';
	return (my_strlen(src));
}
