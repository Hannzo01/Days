#include <stdio.h>


int ft_str_is_alpha(char *str)
{
	int i = 0;
	if (str[i] == '\0'){
		return 1;
	}

	while (str[i] != '\0')
	{
		if(!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))){
			return 0;
		}
		i++;
	}
	return 1;
}
/*
int main()
{
    char *test1 = "salamo";
    char test2[] = "tlija23";
    char *test3 = "";

    printf("%d\n", ft_str_is_alpha(test1));
    printf("%d\n", ft_str_is_alpha(test2)); 
    printf("%d\n", ft_str_is_alpha(test3)); 
}
*/
