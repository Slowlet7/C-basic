#include <stdio.h>

//두 변수의 값을 서로 변환하는 포인터 함수 
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	
	*x = *y;
	*y = temp;
}
int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y); 
	printf("x = %d y =%d", x, y); 
	return 0;
}

	/* 포인터 함수를 사용하지 않고 하면
	swap함수가 그 함수 내에서만 값이 변환되고
	main함수(본 함수) 에서는 그대로 실행되기 때문에
	포인터를 써야 한다*/  
