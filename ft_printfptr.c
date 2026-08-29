#include "ft_printf.h"

static int	ft_putptr_hex(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_putptr_hex(n / 16);
	len += ft_printfchar("0123456789abcdef"[n % 16]);
	return (len);
}

int	ft_printfptr(void *a)
{
	int	len;

	len = 0;
	if (!a)
		return (ft_printfstr("(nil)"));
	len = ft_printfstr("0x");
	len += ft_putptr_hex((unsigned long)a);
	return (len);
}
