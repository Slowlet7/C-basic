#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	
	printf("문자열의 비교 : %d\n", strcmp(inputOne, inputTwo));
	//strcmp 는 사전적으로 순서를 나타낸다  
	//ex) A=1, B=2, C=3 ...	 strcmp(A,B) = A-B = 1-2 = -1 
	return 0;
}
