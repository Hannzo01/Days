#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int a = 3;
	int b = 2;
	printf("%d%d", a,b);
	ft_swap(&a, &b);
	printf("\n%d%d", a,b);
}
*/
