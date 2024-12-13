
#include "libft.h"

void	*my_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if ((nmemb) && (size * nmemb > 0) && ((nmemb * size) / nmemb != size))
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	my_bzero(str, (nmemb * size));
	return (str);
}
