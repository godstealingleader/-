#include <stdio.h>


int algorithm(int a)
{
	int sum = 0,i=1,j=1;
	if (a > 2)
	{
		for (int k = 2; k < a; k++)
		{
			sum = i + j;
			i = j;
			j = sum;
		}
		return sum;
	}
	else
	{
		return 1;
	}
	return sum;
}


main()
{
	int a = 0;
	int x = 0;
	scanf_s("%d",&a);
	x=algorithm(a);
	printf("%d", x);
}