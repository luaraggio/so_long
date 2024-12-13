
#include "libft.h"

char	*my_strchr(const char *s, int c)
{
	char			*ss;
	int				i;
	unsigned char	cc;

	i = 0;
	ss = (char *) s;
	cc = (unsigned char) c;
	while (ss[i] != '\0')
	{
		if (ss[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (!c)
		return (&ss[i]);
	return (NULL);
}
