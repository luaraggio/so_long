
#include "libft.h"

void	my_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *) s;
	while (n > 0)
	{
		a[n - 1] = '\0';
		n--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	a[80] = "String de substituicao";
	int	n;

	printf("Digite o numero de inicio da substituicao: \n");
	scanf("%d", &n);
	my_bzero(&a[n], n);
	printf("%s", a);
}*/
