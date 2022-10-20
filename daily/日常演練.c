#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand(time(0));
	int i;
	int count = 0;
	for(i=1;i<=5;i++)
	{	
		int dice;
		do
		{
			dice = rand();
			count++;
		} while(dice < 1 || dice > 6);

		printf("%d(%d)\n",dice,count);
	}
	
	
	return 0;
}
