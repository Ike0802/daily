#include <stdio.h>
int main()
{	
	int answer,guess;
	answer=4;
	printf("�п�J�K�X:");
	scanf("%d",&guess);
	if(guess==answer)
	{ 
	printf("�q�L\n");
	} 
	if(guess!=answer)
	{
	printf("����\n");	
	
	printf("�п�J�K�X:");
	scanf("%d",&guess);
	
	printf("����\n��J���Ƥw�F�W��");	
	}
	
	return 0;
}

