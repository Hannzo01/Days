#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}    // If src is shorter than n fill the rest of dest wt '\0'
	while (i < n)
	{ 
		dest[i] = '\0';
		i++;
	}	
	return dest;
}
/*
int main()
{
	char src[7] = "hannzo";
	unsigned int n = 10;
	char *dest;
	char *result = ft_strncpy(dest, src, n);
	printf("%s\n", result);

}
	*/
