#include <unistd.h>

void ft_print_numbers(void)
{
	int i;
	i = 48;
	while(i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}
/*
void ft_print_numbersI(void)
{
	char i;
	i = '0';
	while(i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
void ft_print_numbersII(void)
{
	write(1,"0123456789",10);
}
int main()
{
	ft_print_numbers();
	write(1,"\n",1);
	ft_print_numbersI();
	write(1,"\n",1);
	ft_print_numbersII();
}
*/
