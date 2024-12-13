
int	my_atoi(const char *nptr)
{
	int	nbr;
	int	i;
	int	signal;

	i = 0;
	nbr = 0;
	signal = 1;
	while (((nptr[i] == 32) || (nptr[i] >= 7 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = (nbr * 10) + (nptr[i] - 48);
		i++;
	}
	return (nbr * signal);
}
