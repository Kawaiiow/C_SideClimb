#include "mini_print.h"

int	ft_printfstr(char const *format, ...)
{
	va_list	lst_str;
	int		i;
	int		len;

	i = -1;
	len = 0;
	va_start(lst_str, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			len += formatter(lst_str, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
	}
	va_end(lst_str);
	return (len);
}

// example to compare to the library. 
// Well it's only work with string, interger, char and % others format will be in shortly.

int	main(void)
{
	// compare with standard printf
	// ft_printfstr("print from my function : hello world\n");
	// printf("print from stdio library function : hello world\n");

	// compare the return behavior which will return the lenght of string it hgas printed
	// printf("\n%d were printed by my function.\n", ft_printfstr("try %% %s %s %d times", "hello", "world", 2));
	// printf("\n%d were printed by stdio library function.", printf("try %% %s %s %d times", "hello", "world", 2));
	ft_printfstr("%X %x", 256, 256);
	return (0);
}
