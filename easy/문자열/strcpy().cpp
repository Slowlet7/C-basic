#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[11] = "I Love You";		// 마지막에 \0이 있어야 문자열로 인식한다. 확장자를 cpp 가 아닌 c로 하면 10으로도가능 
	char result[5] = "Love";
	
	strcpy(result, input);
	printf("문자열 복사 : %s\n", result);
	
	// strcpy(result, input) ->result가 input을 복사한다.(공간상관x)
	 
	return 0;
}
