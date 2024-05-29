#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1,str,1);
	str++;

		
	}
}


/* void ft_pustr(char str[])
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);	
		i++:
	}

}


int main()
{
	char *str = "salam azen";
	ft_putstr(str);
}
*/
