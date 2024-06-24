#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	while(i)
	{
		i--;
		write(1,&str[i],1);
	}
	return str;
}

int main()
{
	char str[] = "kenza";
	char *rev = ft_strrev(str);
	printf("%s",rev);
}
