
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	ft_printf("--- string, sem args. ---\n");
	printf("%i\n", ft_printf("ft: Olá, o número é 42\n"));
	printf("%i\n", printf("Pf: Olá, o número é 42\n"));
	printf("%i\n", ft_printf(""));
	printf("%i\n", printf(""));

	printf("\n--- char. ---\n");
	printf("%i\n", ft_printf("ft: %c\n", 'M'));
	printf("%i\n", printf("Pf: %c\n", 'M'));
	printf("%i\n", ft_printf("ft: %c\n", 48));
	printf("%i\n", printf("Pf: %c\n", 48));

	printf("\n--- string. ---\n");
	printf("%i\n", ft_printf("ft: uma %s\n", "panela"));
	printf("%i\n", printf("Pf: uma %s\n", "panela"));
	printf("%i\n", ft_printf("ft: uma %s\n", ""));
	printf("%i\n", printf("Pf: uma %s\n", ""));
	printf("%i\n", ft_printf("ft: %s %s %s %s %s\n", " - ", "", "4", "", "2 "));
	printf("%i\n", printf("Pf: %s %s %s %s %s\n", " - ", "", "4", "", "2 "));
	printf("%i\n", ft_printf("ft: NULL %s NULL\n", NULL));
	// printf("%i\n", printf("Pf: NULL %s NULL\n", NULL));

	printf("\n--- print %%. ---\n");
	printf("%i\n", ft_printf("ft: um %%\n"));
	printf("%i\n", printf("Pf: um %%\n"));

	printf("\n--- inteiros. ---\n");
	printf("%i\n", ft_printf("ft: %i\n", -2147483648));
	printf("%i\n", printf("Pf: %li\n", -2147483648));

	printf("\n--- decimal. ---\n");
	printf("%i\n", ft_printf("ft: %d\n", -523));
	printf("%i\n", printf("Pf: %d\n", -523));

	printf("\n--- unsigned. ---\n");
	printf("%i\n", ft_printf("ft: %u\n", -523));
	printf("%i\n", printf("Pf: %u\n", -523));

	printf("\n--- hexadecimal maiusculo. ---\n");
	printf("%i\n", ft_printf("ft: %X\n", 60));
	printf("%i\n", printf("Pf: %X\n", 60));
	printf("%i\n", ft_printf("ft: %X\n", -60));
	printf("%i\n", printf("Pf: %X\n", -60));

	printf("\n--- hexadecimal minusculo. ---\n");
	printf("%i\n", ft_printf("ft: %x\n", 60));
	printf("%i\n", printf("Pf: %x\n", 60));
	printf("%i\n", ft_printf("ft: %x\n", -60));
	printf("%i\n", printf("Pf: %x\n", -60));

	printf("\n--- ponteiro. ---\n");
	printf("%i\n", ft_printf("ft: %p\n", &i));
	printf("%i\n", printf("Pf: %p\n", &i));
	printf("%i\n", ft_printf("ft: %p\n", (void *)0));
	printf("%i\n", printf("Pf: %p\n", (void *)0));

	printf("%i\n", ft_printf("ft: %p\n", &i));
	printf("%i\n", printf("Pf: %p\n", &i));
	printf("%i\n", ft_printf("ft: %p\n", (void *)0));
	printf("%i\n", printf("Pf: %p\n", (void *)0));

	return (0);
}
