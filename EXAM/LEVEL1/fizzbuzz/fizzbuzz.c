#include <unistd.h>

void ft_nbr(int n)
{
    int tmp;
    if (n <= 9)
    {
        tmp = n + '0';
        write(1, &tmp, 1);
    }
    else
    {
        tmp = n / 10 + '0';
        write(1, &tmp, 1);
        tmp = n % 10 + '0';
        write(1, &tmp, 1);
    }
}

int main()
{
    int nbr;
    nbr = 1;
    while (nbr <= 100)
    {
        if (nbr % 5 == 0 && nbr % 3 == 0)
        {
            write(1, "fizzbuzz\n", 9);
        }
        else if (nbr % 5 == 0)
        {
            write(1, "buzz\n", 5);
        }
        else if (nbr % 3 == 0)
        {
            write(1, "fizz\n", 5);
        }
        else
        {
            ft_nbr(nbr);
            write(1, "\n", 1);
        }
        nbr++;
    }
    return 0;
}

