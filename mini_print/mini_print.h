#ifndef MINI_PRINT_H
# define MINI_PRINT_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

# define UP_HEX "0123456789ABCDEF"
# define LOW_HEX "0123456789abcdef"

char	*ft_itoa(int num);
char	*ft_itohex(int num, char *set);

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int num);
int		ft_puthex(int num, char flag);

int		formatter(va_list varg, char flag);

#endif