#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_number(void)
{
	char nbr;

	nbr = '0';
	while(nbr <= '9')
	{
		ft_putchar(nbr);
		nbr++;
	}
}

