#include <stdio.h>

int ft_sqrt(int nb)
{
	int i = 1;
	while ( i * i <= nb && nb <= 46340)
	{
		if ( i * i == nb)
			return i;
		i++;
	}
	return 0;
}
/*
int main()
{
	printf("%d", ft_sqrt(36));
}
*/
