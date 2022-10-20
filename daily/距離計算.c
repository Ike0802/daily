#include <stdio.h>
int main()
{
	int i,j,d;
	printf("請輸入兩個整數: ");
	scanf("%d%d",&i,&j);
	if(i>j)
	{
	   d = i-j;
	}
	else 
	{
	   d = j-i;
	}
	printf("距離:%d",d);
	
	return 0;
}
