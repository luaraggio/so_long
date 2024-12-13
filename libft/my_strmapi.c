
#include "libft.h"
//#include <stdio.h>

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	len = my_strlen (s);
	str = (char *)malloc((len + 1) * (sizeof(char)));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
