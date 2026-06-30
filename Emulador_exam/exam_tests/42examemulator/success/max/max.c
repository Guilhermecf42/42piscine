
int	max(int *tab, unsigned int len)
{
	int	max;

	if (len <= 0)
		return (0);
	max = *tab;
	tab++;
	while (len--)
	{
		if (max < *tab)
			max = *tab;
		tab++;
	}
	return (max);
}
