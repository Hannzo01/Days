#include <stdio.h>
int ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return 1;
	
	while (*str != '\0')
	{
		if(!(*str >= 32 && *str <= 126))
			return 0;
		str++;
	}
	return 1;
}

/*
int main() {
    char test1[] = "salam./25";
    char test2[] = "9ttia\ttlija"; 
    char test3[] = ""; 

    printf("%d\n", ft_str_is_printable(test1)); 
    printf("%d\n", ft_str_is_printable(test2)); 
    printf("%d\n", ft_str_is_printable(test3)); 

    return 0;
}
*/
