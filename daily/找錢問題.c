#include <stdio.h>
int main()
{
	int total,c50,c10,c5,c1;
	scanf("%d",&total);
	
	c50 = total / 50;
	c10 = total % 50 /10;
	c5 = total %50 %10 /5;
	c1 = total %50 %10 %5 /1;
	if(c50 > 0)
	{
		printf("50: %d\n",c50);
	} 
	if(c10 > 0)
	{
		printf("10: %d\n",c10);
	} 
	if(c5 > 0)
	{
		printf(" 5: %d\n",c5);
	} 
	if(c1 > 0)
	{
		printf(" 1: %d\n",c1);
	} 
	return 0;	
}

