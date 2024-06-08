#include <stdio.h>
#include <string.h>


char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	// Find the end of dest to append src starting from that position

	while (dest[i] != '\0')
	{	
		i++;
	}
	while (src[j] != '\0')
	{

		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
/*
int main()
{
	char str1[100] = "salam";
	char str2[] = "kenza";
	char *str11 = ft_strcat(str1,str2);
	char *str22 = strcat(str1,str2);
	printf("%s %s", str11,str22);

}
*/
