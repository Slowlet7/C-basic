
//���� : 1��ũ�� (1����Ʈ) 
//�ѱ� : 2��ũ�� (2����Ʈ) 

/* �迭�� ����Ʈ�� ���������� �ſ� ����ϴ�.
int array[4];

array[1] = 7 �̶� �� ��,
&array[1] = (�����ּ�) �̴�.		*/


#include <stdio.h>
int main(void)
{
	char input[1001];	//1001���� �޸� (0 ~ 1000)
	gets(input);	
	/*input�̶�� char �迭 �ȿ� ������ 
	����ڰ� �Է��ϴ� ���ڿ��� ���͸� ĥ������ ���� ��*/ 
	
	int count = 0;
	while(input[count] != '\0')	//null�� �ƴҶ����� count����(count�� index�� ����) 
	{
		count++; 
    } 
    // ���ڿ��� �Է� �� ���� ������ \0(null) ������ �� 
    
    printf("�Է��� ���ڿ��� ���̴�(���� 1, �ѱ�2) %d �Դϴ�.\n", count );
    printf("�Է��� ���ڿ� : %s", input);
	return 0; 
}
 

