
#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

void	*my_memmove(void *dest, const void *src, size_t n)
{
	char		*destt;
	const char	*srcc;

	destt = (char *) dest;
	srcc = (const char *) src;
	if (destt == srcc)
		return (dest);
	else if (destt > srcc)
	{
		while (n--)
			destt[n] = srcc[n];
	}
	else
	{
		while (n--)
			*destt++ = *srcc++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Oi, Tudo bem?";
	char	src[9] = "Luara";
	size_t	n = 2;

	memmove(dest, src, n);
	printf("%s", dest);
}*/
