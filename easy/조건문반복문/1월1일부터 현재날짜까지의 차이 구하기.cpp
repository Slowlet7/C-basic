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
	 
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &month);
	printf("���� ���� �Է����ּ��� : ");
	scanf("%d", &day);
		
		
	printf("1�� 1�Ϻ��� ���� ��¥������ �Ÿ��� %d�� �Դϴ�.", getDays(month, day));
	
	return 0;
} 
