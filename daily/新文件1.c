#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0)); //�ɶ��ܼ�
	int count[6] = {0};
	for (int i = 1; i <= 6000; i++)
	{
		int dice = rand() % 6 +1;  //dice 1~6
	
		count[dice-1]++;   //  �I�Ƹ�}�C�s��dice ���s��++ 
		
	} 
	for (int j = 1; j <= 6; j++) 
	{
		printf("%d: %d\n",j,count[j-1]);
	}
	
	return 0;
}
