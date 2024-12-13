
#include "libft.h"

static size_t	size_base(unsigned long long n, int base)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		size++;
		n /= base;
	}
	return (size);
}

char	*my_utoa_base(unsigned long long n, int base, char *buffer)
{
	char	*str;
	int		len;

	len = size_base(n, base);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = buffer[(n % base)];
		n /= base;
	}
	return (str);
}
