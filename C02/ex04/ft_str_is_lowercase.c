#include <stdio.h>
int ft_str_is_lowercase(char *str)
{

	if (*str == '\0')
		return 1;

	while (*str != '\0')
	{
		if (!(*str >= 97 && *str <= 122))
		return 0;
	str++;
	}
	
	return 1;	
}
/*
int main()
{
	char *str1 = "aaaa";
	char *str2 = "";
	char *str3 = "aa12";
	
	printf("%d %d %d" , ft_str_is_lowercase(str1), ft_str_is_lowercase(str2), ft_str_is_lowercase(str3));
}
*/
