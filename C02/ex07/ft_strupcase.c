#include <stdio.h>
char *ft_strupcase(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	i++;
	}
	return str;
}
/*
int main()
{
	char str[] = "kJKjkJaaaaa";
	char *c = ft_strupcase(str);
	printf("%s" , c);
}
*/
