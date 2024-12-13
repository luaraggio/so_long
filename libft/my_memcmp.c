
#include "libft.h"
//#include <stdio.h>

int	my_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ss1[i] == ss2[i])
			i++;
		else
			return (ss1[i] - ss2[i]);
	}
	return (0);
}

/*int	main(void)
{
	int	socorro;

	socorro = my_memcmp("Joaquina", "Marilia", 20);
	printf("%d", socorro);
}*/
