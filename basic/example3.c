#include <stdio.h>
int main(void)
{
	int nInput, nTotal;	//�Է�, ���� ���� ���� 
	nTotal = 0;
	
	scanf("%d", &nInput);
	nTotal += nInput;		//���մ��� �����ڴ� ���� 
	scanf("%d", &nInput);
	nTotal += nInput;
	scanf("%d", &nInput);
	nTotal += nInput;
	
	printf("Total : %d\n", nTotal);
	
	return 0;
}
