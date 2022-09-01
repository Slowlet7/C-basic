#include <stdio.h>


int getDays(int month, int day)
{
	int i, sum = 0;
	
	for(i = 1; i < month; i++)
	{
		if(i == 2)
		{
			sum = sum + 28;
		}
		else if(i % 2 == 0)
		{
			sum = sum + 30;
		}
		else 
		{
			sum = sum + 31;
		}
	}
	
	return sum + day;
}




int main(void)
{
	int month, day;
	 
	printf("현재 달을 입력하세요 : ");
	scanf("%d", &month);
	printf("현재 일을 입력해주세요 : ");
	scanf("%d", &day);
		
		
	printf("1월 1일부터 현재 날짜까지의 거리는 %d일 입니다.", getDays(month, day));
	
	return 0;
} 
