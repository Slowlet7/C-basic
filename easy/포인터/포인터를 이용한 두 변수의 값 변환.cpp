#include <stdio.h>

//�� ������ ���� ���� ��ȯ�ϴ� ������ �Լ� 
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	
	*x = *y;
	*y = temp;
}
int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y); 
	printf("x = %d y =%d", x, y); 
	return 0;
}

	/* ������ �Լ��� ������� �ʰ� �ϸ�
	swap�Լ��� �� �Լ� �������� ���� ��ȯ�ǰ�
	main�Լ�(�� �Լ�) ������ �״�� ����Ǳ� ������
	�����͸� ��� �Ѵ�*/  
