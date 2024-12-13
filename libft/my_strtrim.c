
#include "libft.h"
//#include <stdio.h>

char	*my_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && my_strchr(set, *s1))
		s1++;
	len = my_strlen(s1);
	while (*s1 != '\0' && my_strchr(set, s1[len]))
		len--;
	return (my_substr(s1, 0, len + 1));
}

/*int	main(void)
{
	char	*s1 = "Luara ee J ";
	char	*set = "e";

	test = my_strtrim(s1, set);
	printf("%s", test);
}*/
