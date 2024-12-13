
//#include <stdlib.h>
//#include <stdio.h>

int	my_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	unsigned char	letter;
	int				intermediary;

	printf("Digite uma única letra: \n");
	scanf("%c", &letter);
	intermediary = my_isalpha(letter);
	printf("%d", intermediary);
}*/
