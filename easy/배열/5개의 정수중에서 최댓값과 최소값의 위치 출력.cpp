#include <stdio.h>
#define number 5 
#include <limits.h>


int main(void)
{
	int i, max, min, index;	//index는 위치
	max = 0;
	index = 0;
	int array[number];		//배열, number = 5 이므로 크기가 5인 배열을 선언한거다 
	// array[0] ~ array[4] 
	
	min = INT_MAX;
	for(i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	printf("가장 큰값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1);
	
	for(i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = i;
		} 
	}
	printf("가장 작은값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1);
	
	return 0;
}
