#include <unistd.h>

void ft_print_alphabet(void)
{
	int i;
	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}

}
/*
void ft_print_alphabetII(void)
{
	write(1,"abcdefghijklmnopqrstuvwxyz",26);
}
void ft_print_alphabetIII(void)
{
	char i;
	i = 'a';
	while(i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
int main()
{
	ft_print_alphabet();
	write(1,"\n",1);
	ft_print_alphabetII();
	write(1,"\n",1);
	ft_print_alphabetIII();
}
*/
