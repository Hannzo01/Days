#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1; //skip the prog name
	int j;
		
		while(i < argc)	// Iterate through each argument starting from 1
		{
			j = 0; 
			while(argv[i][j] != '\0')
			{
				write(1,&argv[i][j],1);
				j++;
			}
		
			write(1,"\n",1);
		i++;
		}


}
