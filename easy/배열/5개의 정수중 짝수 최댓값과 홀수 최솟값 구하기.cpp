#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i, oddMax, evenMax;
	evenMax = 0;				//  ¦���ִ� 
	oddMax = 0;					//  Ȧ���ּڰ� 
	int array[NUMBER];		//array[0] ~ array[9]
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0)		//¦�� 
		{
			if(evenMax <  array[i])
			{
				evenMax = array[i];
			}
		}
		else
		{
			if(oddMax <  array[i])
			{
				oddMax = array[i];
			}
		}
	}
	
	printf("¦�� �ִ��� %d �̰�, Ȧ�� �ִ��� %d�Դϴ�.", evenMax, oddMax);
	
	
	return 0;
} 
