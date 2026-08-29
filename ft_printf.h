#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *ptr, ...);
int	ft_printfchar(char a);
int	ft_printfstr(char *str);
int	ft_printfint(int c);
int	ft_printfuint(unsigned int n);
int	ft_printfptr(void *a);
int	ft_printfxx(unsigned int c, char *ptr);

#endif