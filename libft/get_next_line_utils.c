#include "libft.h"

char	*my_strjoin_gnl(char const *s1, char const *s2)
{
	char	*nstr;
	int		len;

	if (s1 && s2)
	{
		len = my_strlen_gnl(s1) + my_strlen_gnl(s2);
		nstr = (char *)malloc((len + 1) * (sizeof(char)));
		if (!nstr)
			return (NULL);
		while (*s1 != '\0')
			*(nstr)++ = *(s1)++;
		while (*s2 != '\0')
			*(nstr)++ = *(s2)++;
		*nstr = '\0';
		nstr -= len;
		return (nstr);
	}
	return (NULL);
}

char	*my_strcpy_gnl(char *dest, char *src)
{
	while (*src != '\0')
	{
		*(dest)++ = *(src)++;
	}
	*dest = '\0';
	return (dest);
}

char	*my_strdup_gnl(const char *s)
{
	char	*dup;
	char	*ss;

	ss = (char *) s;
	dup = malloc((my_strlen_gnl(ss) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	my_strcpy_gnl(dup, ss);
	return (dup);
}

char	*my_strchr_gnl(const char *s, int c)
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

char	*my_substr_gnl(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= my_strlen_gnl(s))
		return (my_strdup_gnl(""));
	if (my_strlen_gnl(&s[start]) < len)
		len = my_strlen_gnl(&s[start]);
	sub = (char *)malloc(len + 1 * (sizeof(char)));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
