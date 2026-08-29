#include "ft_printf.h"

int	ft_printfuint(unsigned int n)
{
	int	c;

	c = 0;
	if (n >= 10)
		c += ft_printfuint(n / 10);
	c += ft_printfchar((n % 10) + '0');
	return (c);
}
