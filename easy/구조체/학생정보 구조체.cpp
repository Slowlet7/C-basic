// ����ü�� ���� ���� �����͸� �ϳ��� ��� ����� �� �ִ�.
//�Ŀ� ��ü���� ���α׷��ֿ����� Ŭ���� �������� Ȯ���
//�迭: ���� ���� ���� �ڷ������� ����
//����ü : ���� �ٸ� �ڷ������� ���� 

// double �� �� �Է¹����� (scanf)  %lf �� �����.
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct student {			//����ü student 
	int number;		//��ȣ 
	char name[10];	//�̸� 
	float grade;	//����? 
}; 

int main(void)
{
	struct student s;		// ����ü student�� ���� s 
	
	printf("�й��� �Է��ϼ��� : ", s.number);
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ��� : ", s.name);
	scanf("%s", &s.name);
	printf("������ �Է��ϼ��� : ", s.grade); 
	scanf("%f", &s.grade);
	
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f", s.grade);
	
	return 0;
}  
