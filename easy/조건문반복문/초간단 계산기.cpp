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
			printf("�ٽ� �Է����ּ���\n");
		}
		getchar(); 	// �� �Ѱ��� ���ڸ� �Է¹ްڴ� --> ���� �� ���͸� ȿ�������� ó�� ���� (���͵� ����ó��) 
		printf("���α׷��� �����Ͻðڽ��ϱ�?\n (y/n)");
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;		//continue �� �� ���κ� (while�� ���ο����� while�� ������ ���� ��)���� �ٽ� ���� 
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("�Է��� �߸��Ǿ����ϴ�."); 
		}
	}
	return 0;
	 
}
