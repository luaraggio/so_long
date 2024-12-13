
#include "libft.h"
//#include <stdio.h>

char	*my_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		len;

	if (s1 && s2)
	{
		len = my_strlen(s1) + my_strlen(s2);
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

/*int	main(void)
{
	char const	*s1 = "Socorro, ";
	char const	*s2 = "Luara";
	char	*nstr;

	nstr = my_strjoin(s1, s2);
	printf("%s", nstr);
}*/
