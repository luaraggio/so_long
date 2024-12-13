
#include "libft.h"
//#include <stdio.h>

size_t	my_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	str;
	int	in;
	printf("Escreva uma string: \n");
	scanf("%s", &str);
	in = my_strlen(&str);
	printf("%d", in);
}*/
