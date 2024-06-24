#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int maxi = 1;
	
	if (len == 0)
		return 0;
	while (i < len)
	{	
		if (tab[i] > maxi)
			maxi = tab[i];
		i++;	
	}

	return maxi;
	
}

int main()
{
	int tab[] = {1,959,4,0,3,9};
	unsigned int len = sizeof(tab) / sizeof(tab[0]);
	int maxi = max(tab,len);
	printf("%d", maxi);
}
