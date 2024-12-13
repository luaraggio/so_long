
#include "libft.h"
//#include <stdio.h>

static size_t	my_counter(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			counter++;
		while (*s != c && *s)
			s++;
	}
	return (counter);
}

static void	my_le(char const *s, char c, char **a)
{
	size_t	le;
	size_t	i;

	i = 0;
	if (s)
	{
		le = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				le++;
				s++;
			}
			a[i] = my_substr(s - le, 0, le);
			i++;
			le = 0;
		}
	}
}

char	**my_split(char const *s, char c)
{
	char	**a;
	size_t	l;

	if (!s)
		return (NULL);
	l = my_counter(s, c);
	a = (char **)malloc((l + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	my_le(s, c, a);
	a[l] = 0;
	return (a);
}

/*int	main(void)
{
	char	*s = "split  ||this|for|me|||||!|";
	char	c = '|';
	char	**result;

	result = my_split(s, c);
	int	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free (result[i]);
		i++;
	}
	free (result);
}*/
