#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i = 1;
	int result = 1;
	if ( nb >= 0 )
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return result;
	}
	else 
		return 0;
}
/*
int main()
{
	int result = ft_iterative_factorial(3);
	printf("%d" , result);
}
*/
