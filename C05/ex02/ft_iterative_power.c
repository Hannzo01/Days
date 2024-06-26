#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	// int i = 1;
	int result = nb;

	if (power < 0 )
		return 0;
	else if ( power == 0 )
		return 1;
	else 
	{
		while (power != 1)
		{
			result = result * nb;
			power--;
		}
	}
	return result;
}

/*
int main()
{
	int r = ft_iterative_power(2, 3);
	printf("%d", r);

}
*/
