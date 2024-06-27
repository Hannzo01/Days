#include <stdio.h>

int ft_is_prime(int nb)
{
	int i = 3;
	if (nb <= 1)
		return 0;
	else if (nb == 2)
		return 1;
	else if (nb % 2 == 0)
		return 0;
	
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
	  i = i + 2;
	}
	return 1;
}
/*
int main()
{
	printf("%d", ft_is_prime(27));
}
*/
