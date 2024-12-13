
//#include <stdio.h>
//#include <stdlib.h>

int	my_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main(void)
{
	unsigned char	c;
	printf("Digite um caractere: \n");
	scanf("%c", &c);
	printf("%c", my_toupper(c));
}*/
