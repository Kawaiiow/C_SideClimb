#include "mini_print.h"

int	formatter(va_list varg, char flag)
{
	int	len;

	len = 0;
	if (flag == 'd' || flag == 'i')
		len += ft_putnbr(va_arg(varg, int));
	if (flag == 'X' || flag == 'x')
		len += ft_puthex(va_arg(varg, int), flag);
	else if (flag == 's')
		len += ft_putstr(va_arg(varg, char *));
	else if (flag == 'c')
		len += ft_putchar(va_arg(varg, int));
	else if (flag == '%')
		len += ft_putchar('%');
	return (len);
}
