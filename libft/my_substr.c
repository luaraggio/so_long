
#include "libft.h"
//#include <stdio.h>

char	*my_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= my_strlen(s))
		return (my_strdup(""));
	if (my_strlen(&s[start]) < len)
		len = my_strlen(&s[start]);
	sub = (char *)malloc(len + 1 * (sizeof(char)));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	const char	*test = "Socorro";
	unsigned int	start = 7;
	size_t	len = 6;
	char	*inter;

	inter = my_substr(test, start, len);
	printf("%s", inter);
}*/
