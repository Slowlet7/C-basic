#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i, oddMax, evenMax;
	evenMax = 0;				//  Â¦¼öÃÖ´ñ°ª 
	oddMax = 0;					//  È¦¼öÃÖ¼Ú°ª 
	int array[NUMBER];		//array[0] ~ array[9]
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0)		//Â¦¼ö 
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
	
	printf("Â¦¼ö ÃÖ´ñ°ªÀº %d ÀÌ°í, È¦¼ö ÃÖ´ñ°ªÀº %dÀÔ´Ï´Ù.", evenMax, oddMax);
	
	
	return 0;
} 
