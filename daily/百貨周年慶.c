#include <stdio.h>
int main()
{
	int n,total;
	printf("�п�J���O���B:");
	scanf("%d",&n);
	if(n>3000)
	{
	total= 3000+(n-3000)*0.8;	
	printf("���I���B%d",total);		
	}
	else
	{
	printf("���I���B:%d",n);
	}
	return 0;
} 
