#include <stdio.h>
int main()
{	
 	int n;
 	int answer=4;
 	int guess;
 	printf("�п�J�K�X:");
 	scanf("%d",&guess);
 	
	if(guess==answer)
	{
	printf("�q�L");
	}
 	else 
	{
	printf("����\n");
	}
	
	if(guess!=answer){
	printf("�п�J�K�X:");
 	scanf("%d",&guess); 
 	
	if(guess==answer)
	{
	printf("�q�L");
	}
 	else 
	{
	printf("����\n��J���Ƥw�F�W��");
	}
 	}
 	
 	return 0;
} 
