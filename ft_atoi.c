#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}



int ft_atoi (const char *str) 
{
    int sign = 1;
    long result;
    int  i = 0;

    while(str[i] >= 9 && str[i] <=13 || str[i] == 32)
    {
        i++;
    }

    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return ((int)(result * sign));
}



