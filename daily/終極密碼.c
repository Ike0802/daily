#include <stdio.h>
int main(){ 
	int guess,answer,min=0,max=99;
	printf("Please enter the answer: ");
	scanf("%d",&answer);
	do
	{
		printf("[%d~%d]: ",min,max);
		scanf("%d",&guess);
		if(guess > answer)
		{
			max = guess -1;
		}else if(guess < answer)
		{
			min = guess +1;	
		}
	}while(guess != answer);
	
	printf("Correct");
	return 0;
} 
