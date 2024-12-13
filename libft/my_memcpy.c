
#include "libft.h"
//#include <stdio.h>

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	char	*destt;
	char	*srcc;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	destt = (char *) dest;
	srcc = (char *) src;
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (destt);
}

/*int	main(void)
{
	char	srcc[] = "ABCD1";
	char	destt[20];
	int	n;
	printf("Digite a quantidade de bytes que deseja copiar: \n");
	scanf("%d", &n);
	my_memcpy(&srcc, &destt, n);
	printf("%s\n", destt);
}*/
