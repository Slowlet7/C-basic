#include <stdio.h>
int main(void)
{
	// 윤년2월은 28일인데 4년마다 29일로 지정
	// 100년 단위일 때는 윤년에 해당하지 않음 
	//400년 단위일때는 어떤 상황이든간에 윤년으로 설정 
	
	int year = 2022;
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
	{
		printf("%d는 윤년입니다.", year);
	} 
	else
	{
		printf("%d는 윤년이 아닙니다.", year);
	}
	
	return 0;
} 
