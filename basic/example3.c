#include <stdio.h>
int main(void)
{
	int nInput, nTotal;	//입력, 총합 변수 선언 
	nTotal = 0;
	
	scanf("%d", &nInput);
	nTotal += nInput;		//복합대입 연산자는 누적 
	scanf("%d", &nInput);
	nTotal += nInput;
	scanf("%d", &nInput);
	nTotal += nInput;
	
	printf("Total : %d\n", nTotal);
	
	return 0;
}
