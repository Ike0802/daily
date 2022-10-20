#include <stdio.h>
int main()
{
	int n,total;
	printf("請輸入消費金額:");
	scanf("%d",&n);
	if(n>3000)
	{
	total= 3000+(n-3000)*0.8;	
	printf("應付金額%d",total);		
	}
	else
	{
	printf("應付金額:%d",n);
	}
	return 0;
} 
