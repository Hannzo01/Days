
#include <stdio.h>
/*
int ft_strlen(char *str)
{
	int length;
	length = 0;
	while( str[length] != '\0')
	{
		length++;
	}
	return length;
}
*/
int ft_strlen(char *str)
{
	int i = 0;
	while (*str != '\0')
	{
		str++;
	i++;
	}
	return i;
}
/*
int main()
{
	char *str = "tlija le 9tita";
	int length = ft_strlen(str);
	printf("the length is = %d" , length);
	char str2[] = "Hannzo";
	int len = ft_strlen(str2);
	printf("\n the length is = %d  ", len);


}
*/
