#include <stdio.h>
int main(void)
{
	int number, x, i; 
	int sum = 0;
	
	printf("정수 입력 : ");
	scanf("%d", &number);
	
	for(i = 0; i < number; i++)
	{
		printf("정수의 값을 입력 : ");
		scanf("%d", &x);
		sum += x; 
	}
	printf("전체 정수의 합은 %d 입니다.\n", sum);
	return 0; 
} 

