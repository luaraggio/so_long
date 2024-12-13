
#include "libft.h"

char	*my_strrchr(const char *s, int c)
{
	char				*ss;
	unsigned char		cc;
	int					i;

	i = 0;
	cc = (unsigned char) c;
	ss = (char *) s;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ss[i] == cc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	s[] = "caac";
	char	*so;
	so = my_strrchr(s, 'c');
	printf("%s", so);
}*/
