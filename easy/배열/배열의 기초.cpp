#include <stdio.h>
int main(void)
{
	int ar[3][4] = {{1, 2, 3, 4}, 
					{5, 6, 7, 8}, 				// 총 3행 4열로 구성된 배열 ->  7은 1행 2열에 있다.
					{9, 10, 11, 12}};			// ar[1][2] = 7
	
	int ar1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	printf("%d", ar[1][2]);
	
	return 0; 
} 
