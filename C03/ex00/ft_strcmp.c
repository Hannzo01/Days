#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*

int main()
{
	char s1[] = "abcd";
	char s2[] = "abcd";
	int result = ft_strcmp(s1,s2);
	int result1 = strcmp(s1,s2);
	printf("%d %d" , result, result1);
	return 0 ;

}
*/
