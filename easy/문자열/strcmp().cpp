#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	
	printf("���ڿ��� �� : %d\n", strcmp(inputOne, inputTwo));
	//strcmp �� ���������� ������ ��Ÿ����  
	//ex) A=1, B=2, C=3 ...	 strcmp(A,B) = A-B = 1-2 = -1 
	return 0;
}
