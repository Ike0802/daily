#include <stdio.h>
#include <stdlib.h>

int sum(int N)
{	
	int sum;
	for (int i=1;i<=N;i++)
	{
		sum = sum +i;
	} 
	return sum;
}



int main()
{	
	printf("%d\n",sum (100));
	printf("%d\n",sum (10));
	printf("%d\n",sum (30));

	return 0;
}
