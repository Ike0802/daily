#include <stdio.h>
int main()
{
	int n,total;
	printf("How much did you pay:");
	scanf("%d",&n);
	if(n>3000)
	{
	total= 3000+(n-3000)*0.8;	
	printf("total%d",total);		
	}
	else
	{
	printf("Total:%d",n);
	}
	return 0;
} 
