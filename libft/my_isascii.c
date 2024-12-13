
/*#include <stdio.h>
#include <stdlib.h>*/

int	my_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;
	printf("Digite um caractere para verificar se pertence a tabela ascii:  \n");
	scanf("%d", &c);
	printf("%d",my_isascii(c));
}*/
