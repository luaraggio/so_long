/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:19:12 by lraggio           #+#    #+#             */
/*   Updated: 2023/11/22 17:19:18 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio..h>

void	ft_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *) s;
	while (n > 0)
	{
		a[n - 1] = '\0';
		n--;
	}
}

/*int	main(void)
{
	char	a[80] = "String de substituicao";
	int	n;

	printf("Digite o numero de inicio da substituicao: \n");
	scanf("%d", &n);
	ft_bzero(&a[n], n);
	printf("%s", a);
}*/
