#include <unistd.h>
void ft_print_reverse_alphabet(void)
{	
	char i = 'z';
	while (i >= 'a')
	{
		write(1, &i ,1);
		i--;
	}

}
/*
void ft_print_reverse_alphabetI(void)
{
	int i;
	i = 122;
	while ( i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

void ft_print_reverse_alphabetII(void)
{
	write(1,"zyxwvutsrqponmlkjihgfedcba",26);
}
int main()
{
	ft_print_reverse_alphabet();
	write(1,"\n",1);
	ft_print_reverse_alphabetI();
	write(1,"\n",1);
	ft_print_reverse_alphabetII();
}

*/
