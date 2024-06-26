#include <stdio.h>

int ft_recursive_factorial(int nb)
{	
	if (nb == 0 || nb == 1) //base condistion ; the condition that stops the recursion
                return 1;

        else if (nb < 0)
                return 0;

	else
		return nb * ft_recursive_factorial(nb - 1);

}
/*		
		fac(1)	return 1 
		fac(2)	return 2 * fac(1) 2 * 1
		fac(3)	return 3 * fac(2) 3 * (2 * 1)
		fac(4)	return 4 * fac(3) 4 * ( 3 * (2 * 1))
		fac(5)	return 5 * fac(4) 5 * 4 * ( 3 * (2 * 1))
			
		5 * (4 * (3 * (2 * 1))) = 120
	
}


int main()
{
	int r = ft_recursive_factorial(5);
	printf("%d" , r);
}
*/
