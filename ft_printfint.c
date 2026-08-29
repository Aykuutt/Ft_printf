#include "ft_printf.h"

int	ft_printfint(int c)
{
	int		len;
	long	n;

	len = 0;
	n = c;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_printfint(n / 10);
	len += ft_printfchar((n % 10) + '0');
	return (len);
}
