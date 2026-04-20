
int	ft_atoi(const char *str)
{
	int i;
	int sinal;
	int dest;

	i = 0;
	sinal = 1;
	dest = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest = (dest * 10) + (str[i] - '0');
		i++;
	}
	return (dest * sinal);
}