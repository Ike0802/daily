#include <stdio.h>
int main()
{	
 	int n;
 	int answer=4;
 	int guess;
 	printf("請輸入密碼:");
 	scanf("%d",&guess);
 	
	if(guess==answer)
	{
	printf("通過");
	}
 	else 
	{
	printf("失敗\n");
	}
	
	if(guess!=answer){
	printf("請輸入密碼:");
 	scanf("%d",&guess); 
 	
	if(guess==answer)
	{
	printf("通過");
	}
 	else 
	{
	printf("失敗\n輸入次數已達上限");
	}
 	}
 	
 	return 0;
} 
