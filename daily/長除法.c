#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	int count = 0, prev = 0;
	int toprint;
	int digit;
	while(scanf("%d",&digit)!=EOF)
	{
	int value = 10 * prev + digit;      /* value(38) = 10 * 0 + 38  prev�^��3�B6 */ 
	toprint= value / k;	                /* toprint(5) = 38 / 7 */ 
	if(!(count == 0 && toprint == 0))   /*������0*/ 
	printf("%d\n",toprint);             /* 5 */   
	prev = value % k;                   /* prev = 38 mod 7   �l 3 */ 
	count++;                            /* �������X���*/ 
	}
	
	if(count == 1 && toprint == 0)
	printf("0\n");


	return 0;	
}
