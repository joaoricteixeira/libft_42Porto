#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i;
	int n;
	int sign;
	int result;

	sign = 1;
	i = 0;
	n = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	   i++;

	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
		n++;
	}
	
	if (n > 1)
		return (0);

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}

	return (result * sign);
}
/*
int main(int argc, char * argv[])
{
	if(argc > 1)
	{
		printf("ft_atoi: %d\n", ft_atoi(argv[1]));
		printf("atoi: %d\n", atoi(argv[1]));
	}

	return (0);
}*/
