#include <unistd.h>
void ft_is_negative(int n)
{
	if (n >= 0)
		write(1,"P", 1);
	else 	
		write(1, "N", 1);
}
/*
int main()
{
	int n, m;
	n = -23431;
	m = 2;
	 ft_is_negative(n);
	 ft_is_negative(m);
}
*/
