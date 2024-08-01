#include "mini_print.h"

static int	hex_len(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num != 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

char	*ft_itohex(int num, char *set)
{
	int			len;
	long int	number;
	char		*res;

	len = hex_len(num);
	number = num;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (num == 0)
		res[0] = '0';
	if (number < 0)
	{
		number = -number;
		res[0] = '-';
	}
	while (number > 0)
	{
		res[len--] = set[number % 16];
		number /= 16;
	}
	return (res);
}
