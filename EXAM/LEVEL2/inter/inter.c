#include <unistd.h>
int test(char *str, char c, int nb)
{
        while(nb >= 0)
        {
                if(str[nb] == c)
                        return 25;
        nb--;
        }
        return 13;
}

void inter(char *str1, char *str2)
{
        int i = 0;
        int j;
        while(str1[i] != '\0')
        {
                j = 0;
                while(str2[j] != '\0')
                {
                        if (str1[i] == str2[j])
                        {
                                if(test(str1,str1[i], i - 1) == 13)
                                        write(1,&str1[i],1);
                                break;

                        }
                j++;
                }
        i++;
        }

}

int main(int argc, char *argv[])
{
        if (argc == 3)
        {
                inter(argv[1], argv[2]);
        }
        write(1,"\n",1);
}
