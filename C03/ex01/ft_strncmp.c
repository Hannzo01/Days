#include <stdio.h>
#include <string.h>

int ft_strncmp( char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	if ( i == n)
		return 0;

	return (s1[i] - s2[i]);

}

/*
int main()
{
	char str1[] = "salam";
	char str2[] = "salamm";
	int result1 = ft_strncmp(str1, str2, 7);
	int result2 = strncmp(str1,str2,7);
	printf("%d %d ", result1, result2);

}
*/
