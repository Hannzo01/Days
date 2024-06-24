#include <unistd.h>

//compares two strings
int ft_strcmp(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

// sort an array of strings using bubble sort algo
void bubble_sort(char **str, int length)
{
	
	char *tmp; //pointer that holds the address of a string
	int i = 0;
	int j ;
	while ( i < length)
	{
		j = 0;
		while ( j < (length - 1))
		{
			if(ft_strcmp(str[j] , str[j + 1]) > 0)
			{
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}	
		j++;
		}
	i++;
	}

}

int main(int argc , char **argv)
{

	if (argc > 1)
	{
	bubble_sort(argv + 1, argc - 1);
	int i = 1;
		while (i < argc)
		{
			int j = 0;
			while (argv[i][j] != '\0')
			{
				write(1,&argv[i][j],1);
			j++;	
			}
			write(1,"\n",1);
		i++;
		}	
	}
	return 0;
}
