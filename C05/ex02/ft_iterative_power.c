#include <stdio.h>

int ft_iterative_power(int nb, int power)
{	
	int result = 1;
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return result;
}

/*
int main()
{
	int value = ft_iterative_power(2,3);
	printf("%d",value);
}
*/
