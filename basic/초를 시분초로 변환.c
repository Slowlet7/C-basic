# include <stdio.h>

int main(void)
{
	int inputSec, sec, min, hour;
	printf("초를 입력해주세요 : ");
	scanf("%d", &inputSec);
	
	sec = inputSec % 60;
	min = inputSec / 60 % 60;
	hour = inputSec / 3600;
	
	
	
	
	printf("입력하신 초는 %d시 %d분 %d초 입니다.", hour, min, sec);
	
	return 0;	
	
}
