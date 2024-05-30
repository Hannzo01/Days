#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;

	}
	dest[i] = '\0';
	return dest;
}
/* 


int main()
{
	char str1[222];
	char* str2 = "tlija le 9tita le zwenaaa";
	char *result = ft_strcpy(str1,str2);
	printf("%s",result);

}
*/
