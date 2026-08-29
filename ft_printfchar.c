#include "ft_printf.h"

int	ft_printfchar(char a)
{
	return (write(1, &a, 1));
}
