# include <stdio.h>

int main(void)
{
	int inputSec, sec, min, hour;
	printf("�ʸ� �Է����ּ��� : ");
	scanf("%d", &inputSec);
	
	sec = inputSec % 60;
	min = inputSec / 60 % 60;
	hour = inputSec / 3600;
	
	
	
	
	printf("�Է��Ͻ� �ʴ� %d�� %d�� %d�� �Դϴ�.", hour, min, sec);
	
	return 0;	
	
}
