
/*#include <locale.h>
#include <stdio.h>
#include <stdlib.h>*/

int	my_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	digit;

	printf("Digite um dígito entre 0 e 9: \n");
	scanf("%d", &digit);
	printf("%d", my_isdigit(digit));
}*/
