#include <stdio.h>

int ft_prime(int nb)
{
	int i = 3;

	if (nb <= 1)
		return 0;
	else if (nb == 2)
		return 1;
	else if (nb % 2 == 0)
		return 0;
	
	while ( i * i <= nb )
	{
		if ( nb % i == 0)
			return 0;
		i = i + 3;
	}
	return 1;	
}	
int ft_find_next_prime(int nb)
{
	while(!ft_prime(nb))
	{
		nb++;
	}
	return nb;
}
