
/*#include <stdio.h>
#include <stdlib.h>*/

int	my_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*int	main(void)
{
	unsigned char	c;
	printf("Digite um caractere: \n");
	scanf("%c", &c);
	printf("%c", my_tolower(c));
}*/
