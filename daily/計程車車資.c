#include <stdio.h>
int main()
{	
	int answer,guess;
	answer=4;
	printf("請輸入密碼:");
	scanf("%d",&guess);
	if(guess==answer)
	{ 
	printf("通過\n");
	} 
	if(guess!=answer)
	{
	printf("失敗\n");	
	
	printf("請輸入密碼:");
	scanf("%d",&guess);
	
	printf("失敗\n輸入次數已達上限");	
	}
	
	return 0;
}

