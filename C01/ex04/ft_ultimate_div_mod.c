#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int mod, div;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main()
{
	int a = 18;
	int b = 9;
	ft_ultimate_div_mod(&a, &b);
	printf("%d%d", a, b);
}
*/
