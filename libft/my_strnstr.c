
#include "libft.h"
//#include <stdio.h>

char	*my_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if ((!big || !little) && !len)
		return (NULL);
	if (!(*little))
		return ((char *) big);
	while ((big[i] != '\0') && (i < len))
	{
		if (little[j] == big[i])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *) &big[i - j]);
		}
		else
		{
			i = (i - j) + 1;
			j = 0;
		}
	}
	return (NULL);
}

/*int	main(void)
{
	const char	b[] = "Luaaaaarra oi";
	const char	l[] = "ara";
	size_t	len = 10;
	char	*re;

	re = my_strnstr(b, l, len);
	printf("%s", re);
}*/
