
int	is_power_of_2(unsigned int n)
{
	// if (n == 1 || n == 0)
	// 	return (0);
	return (n % 2 == 0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned int n;

// 	n = 658;
// 	printf("%i\n", is_power_of_2(n));
// 	return (0);
// }