#include "mini_print.h"

static int	n_len(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int num)
{
	int				len;
	char			*res;
	unsigned int	number;

	len = n_len(num);
	res = (char *)malloc(len * sizeof(int));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (num == 0)
		res[0] = 0;
	if (num < 0)
	{
		number = num * -1;
		res[0] = '-';
	}
	else
		number = num;
	while (number > 0)
	{
		res[len--] = (number % 10) + '0';
		number /= 10;
	}
	return (res);
}

