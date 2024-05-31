#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return 1;
	while(*str != '\0')
	{
		if(! (*str >= 65 && *str <= 90))
			return 0;
	str++;
	}
	return 1;
}
/*
int main()
{
	char *str1 = "AAAA";
	char *str2 = "";
	char *str3 = "AAAAA6";
	
	printf("%d %d %d" , ft_str_is_uppercase(str1), ft_str_is_uppercase(str2), ft_str_is_uppercase(str3));
}
*/
