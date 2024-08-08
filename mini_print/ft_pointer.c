#include "mini_print.h"

int	ft_putptr(uintptr_t ptr)
{
	static int	len;

	if (!len)
		len += ft_putstr("0x");
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
		len += ft_putchar(LOW_HEX[ptr]);
	return (len);
}
