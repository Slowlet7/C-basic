#include <stdio.h>

// �������� : ���α׷� ��ü���� ��� �� �� 

int hour;
int minute;
int minuteAdd;
 
void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}

int main(void)
{
	printf("�ø� �Է��ϼ��� :");
	scanf("%d", &hour);
	printf(" ���� �Է��ϼ��� :");
	scanf("%d", &minuteAdd);
	printf("���� ����  �Է��ϼ��� :");
	scanf("%d", &minute);
	counter();
	printf("������ �ð��� %d�� %d�� �Դϴ�.", hour, minute);
	
	return 0;
	
}

