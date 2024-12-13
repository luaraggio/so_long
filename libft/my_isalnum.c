
//#include <stdio.h>

int	my_isalnum(int c)
{
	if (((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	unsigned char	c;
	printf("Digite um digito ou uma letra: \n");
	scanf("%c", &c);
	printf("%d", my_isalnum(c));
}*/
