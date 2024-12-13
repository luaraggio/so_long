
#include "libft.h"

static char	*my_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*(dest)++ = *(src)++;
	}
	*dest = '\0';
	return (dest);
}

char	*my_strdup(const char *s)
{
	char	*dup;
	char	*ss;

	ss = (char *) s;
	dup = malloc((my_strlen(ss) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	my_strcpy(dup, ss);
	return (dup);
}
