#include "mini_print.h"

int	ft_printfstr(char const *format, ...)
{
	va_list	lst_var;
	int		i;
	int		len;

	i = -1;
	len = 0;
	va_start(lst_var, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			len += formatter(lst_var, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
	}
	va_end(lst_var);
	return (len);
}

// example to compare to the stdio library.
int	main(void)
{
	int	n;

	n = 42;
	// compare with standard printf
	ft_printfstr("print from my function : hello world\n");
	printf("print from stdio library function : hello world\n");

	// compare the return behavior which will return the lenght of string it hgas printed
	printf("\n%d were printed by my function.\n", ft_printfstr("try %% %s %s %d times", "hello", "world", 2));
	printf("\n%d were printed by stdio library function.\n", printf("try %% %s %s %d times", "hello", "world", 2));

	// print pointer
	printf("%d\n", printf("pointer %p\n", &n));
	printf("%d\n", ft_printfstr("pointer %p\n", &n));
	return (0);
}
