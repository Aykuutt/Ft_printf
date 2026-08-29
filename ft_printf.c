#include "ft_printf.h"

static int	ft_printerr(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_printfchar(va_arg(args, int));
	else if (c == 's')
		counter += ft_printfstr(va_arg(args, char *));
	else if (c == 'p')
		counter += ft_printfptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		counter += ft_printfint(va_arg(args, int));
	else if (c == 'u')
		counter += ft_printfuint(va_arg(args, unsigned int));
	else if (c == 'x')
		counter += ft_printfxx(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		counter += ft_printfxx(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		counter += ft_printfchar('%');
	return (counter);
}

int	ft_printf(const char *ptr, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!ptr)
		return (-1);
	va_start(args, ptr);
	i = 0;
	len = 0;
	while (ptr[i])
	{
		if (ptr[i] == '%')
		{
			i++;
			len += ft_printerr(ptr[i], args);
		}
		else
			len += ft_printfchar(ptr[i]);
		i++;
	}
	va_end(args);
	return (len);
}
