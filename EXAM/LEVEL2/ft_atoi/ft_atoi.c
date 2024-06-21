#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int 	sign = 1;
	int	result = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-' || *str == '+')
	{
		if( *str == '-')
			sign *= -1 ;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
	str++;
	}
	return (result * sign);
}
/*
int main()
{
	char str1[] = "	 -42a";
	char str2[] = "	  -42a";
	int result1 = atoi(str1);
	int result2 = ft_atoi(str2);
	printf("%d %d", result1, result2);

}
*/
