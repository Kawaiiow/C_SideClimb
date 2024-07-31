#ifndef MINI_PRINT_H
# define MINI_PRINT_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int num);

char	*ft_itoa(int num);

int	formatter(va_list varg, char flag);

#endif