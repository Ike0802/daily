#include <stdio.h>
int main()
{
	int i,j,d;
	printf("�п�J��Ӿ��: ");
	scanf("%d%d",&i,&j);
	if(i>j)
	{
	   d = i-j;
	}
	else 
	{
	   d = j-i;
	}
	printf("�Z��:%d",d);
	
	return 0;
}
