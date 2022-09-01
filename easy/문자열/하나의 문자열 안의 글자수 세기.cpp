
//영어 : 1개크기 (1바이트) 
//한글 : 2개크기 (2바이트) 

/* 배열과 포인트는 내부적으로 매우 흡사하다.
int array[4];

array[1] = 7 이라 할 때,
&array[1] = (대충주소) 이다.		*/


#include <stdio.h>
int main(void)
{
	char input[1001];	//1001개의 메모리 (0 ~ 1000)
	gets(input);	
	/*input이라는 char 배열 안에 다음에 
	사용자가 입력하는 문자열이 엔터를 칠때까지 들어가는 것*/ 
	
	int count = 0;
	while(input[count] != '\0')	//null이 아닐때까지 count증가(count가 index의 역할) 
	{
		count++; 
    } 
    // 문자열의 입력 후 남은 공간은 \0(null) 값으로 들어감 
    
    printf("입력한 문자열의 길이는(영어 1, 한글2) %d 입니다.\n", count );
    printf("입력한 문자열 : %s", input);
	return 0; 
}
 

