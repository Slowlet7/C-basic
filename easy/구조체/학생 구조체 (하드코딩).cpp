// ����ü�� ���� ���� �����͸� �ϳ��� ��� ����� �� �ִ�.
//�Ŀ� ��ü���� ���α׷��ֿ����� Ŭ���� �������� Ȯ���
//�迭: ���� ���� ���� �ڷ������� ����
//����ü : ���� �ٸ� �ڷ������� ���� 


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
	s.number = 12345678;
	strcpy(s.name , "�輭��");
	s.grade = 4.5;
	
	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1f", s.grade);
	
	return 0;
} 
