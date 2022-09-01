#include <stdio.h>
int main(void)
{
	char o;
	int a, b;
	
	while(1)
	{
	
		printf("Enter a formula : ");
		scanf("%d %c %d", &a, &o, &b);
	
		if(o == '+')	
		{
			printf("%d %c %d = %d\n", a, o, b, a + b);
		}
		else if(o == '-')	
		{
			printf("%d %c %d = %d\n", a, o, b, a - b);
		}
		else if(o == '*')	
		{
			printf("%d %c %d = %d\n", a, o, b, a * b);
		}
		else if(o == '/')	
		{
			printf("%d %c %d = %d\n", a, o, b, a / b);
		}
		else if(o == '%')	
		{
			printf("%d %c %d = %d\n", a, o, b, a / b);
		}
		else
		{
			printf("다시 입력해주세요\n");
		}
		getchar(); 	// 단 한개의 문자를 입력받겠다 --> 버퍼 즉 엔터를 효율적으로 처리 가능 (엔터도 문자처리) 
		printf("프로그램을 종료하시겠습니까?\n (y/n)");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;		//continue 는 맨 윗부분 (while문 내부에서는 while문 내부중 가장 위)에서 다시 시작 
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("입력이 잘못되었습니다."); 
		}
	}
	return 0;
	 
}
