#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int counter = 0;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z'){
				// A - 64 = 1  ==> REPEAT A * 1
			counter = argv[1][i] - 64;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z'){
                        counter = argv[1][i] - 96;
                        }
			else 
				write(1,&argv[1][i],1);

                        while (counter != 0){
                        
                                write(1,&argv[1][i],1);
                                counter--;
			}
		i++;
		}

	}
	write(1,"\n",1);
}
