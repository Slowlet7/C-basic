#include <stdio.h>
#include <limits.h>		//INT_MAX 를 사용하기 위해 작성 
#define NUMBER 10

// 짝수 최댓값과 홀수 최솟값,  그 순서를 출력 

int main(void)
{
	int i, evenMax, oddMin;
	int evenIndex = 0;		//짝수 순서 
	int oddIndex = 0;		//홀수 순서 
	
	int array[NUMBER];		// 데이터가 10   -> 0 ~ 9 
	
	evenMax = 0;
	oddMin = INT_MAX;		
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		
		if(array[i] % 2 == 0 && evenMax < array[i])		 
		{
			evenMax = array[i];				// 짝수최댓값 < array[i] 이면 최댓값 갱신하도록 한다. 
			evenIndex = i;					// 갱신된 최댓값의 순서를 저장 
		}
		
		else if(oddMin > array[i])
		{
			oddMin  = array[i];				// 홀수최솟값 > array[i] 이면 최솟값 갱신하도록 한다. 
			oddIndex = i;					// 갱신된 최솟값의 순서를 저장 
			
		}	
		
	}
	printf("짝수 최댓값은 %d, 홀수 최솟값은 %d입니다.\n", evenMax, oddMin);
	printf("짝수 최댓값은 %d 번째에 있습니다. 홀수 최솟값은 %d번째에 있습니다.", evenIndex + 1, oddIndex + 1);	
		// 컴퓨터는 0부터 시작해서 올라가므로 + 1을 해준다. 
	return 0;
}
