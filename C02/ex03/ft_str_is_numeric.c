#include <stdio.h>
int ft_str_is_numeric(char *str)
{
	int i = 0;
	if (str[i] == '\0')
		return 1;
	
	while(str[i] != '\0')
	{
		if(!( str[i] >= 48 && str[i] <= 57))
			return 0;
	i++;
	}
	return 1;
}
/*
int main()
{
	char *str1 = "123445";
	char *Str2 = "11111q";
	char str[] = "";
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(Str2));   
	printf("%d\n", ft_str_is_numeric(str));  


}
*/
