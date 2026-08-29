#include "ft_printf.h"

int	ft_printfxx(unsigned int c, char *ptr)
{
	int	len;

	len = 0;
	if (c >= 16)
		len += ft_printfxx(c / 16, ptr);
	len += ft_printfchar(ptr[c % 16]);
	return (len);
}
