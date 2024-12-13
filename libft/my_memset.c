
#include "libft.h"
//#include <stdio.h>

void	*my_memset(void *s, int c, size_t n)
{
	char	*a;

	a = (char *)s;
	while (n > 0)
	{
		a[n - 1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	a[] = "String de substituicao";
	char	c;
	int	n;

	printf("Digite um caractere: \n");
	scanf("%c", &c);
	printf("Digite o numero de vezes que queira substituir: \n");
	scanf("%d", &n);
	my_memset(a, c, n);
	printf("%s", a);
}*/
