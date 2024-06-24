#include <unistd.h>

int main(int argc , char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			 if (argv[1][i] >= 'A' && argv[1][i] <= 'M'){
				argv[1][i] = (78 - argv[1][i]) + 77;
				write(1,&argv[1][i],1);
			}
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z'){
                                argv[1][i] = 77 - (argv[1][i] - 78);
                                write(1,&argv[1][i],1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'm'){
                                argv[1][i] = (110 - argv[1][i]) + 109;
                                write(1,&argv[1][i],1);
			}
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z'){
                                argv[1][i] = 109 - (argv[1][i] - 110);
                                write(1,&argv[1][i],1);
			}
			else
				write(1,&argv[1][i],1);
			i++;	
		}
	}
	write(1,"\n",1);
}
