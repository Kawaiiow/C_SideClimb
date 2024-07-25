#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static int	ft_putchar(int c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}

static int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	ft_printfstr(char const *format, ...)
{
	va_list	lst_str;
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(lst_str, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			str = va_arg(lst_str, char *);
			len += ft_putstr(str);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(lst_str);
	return (len);
}

// example to compare to the library. 
// Well it's only work with string still my be the integer will be after.

int main()
{
	// compare with standard printf
	ft_printfstr("print from my function : hello world\n");
	printf("print from stdio library function : hello world");

	// compare the return behavior which will return the lenght of string it hgas printed
	printf("\n%d were printed by my function.", ft_printfstr("try % %", "hello", "world"));
	printf("\n%d were printed by stdio library function.", printf("try %s %s", "hello", "world"));
	return 0;
}
