#include <stdio.h>
#define SIZE 3

struct student{
	int number;
	char name[21];
	double grade;		//GPA ������ �ǹ� 
};

int main(void)
{
	struct student list[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("<1��° �л�>\n");
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &list[i].number); 
		printf("<2��° �л�>\n");
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", &list[i].name); 
		printf("<3��° �л�>\n");
		printf("������ �Է��ϼ��� : ");
		scanf("%lf", &list[i].grade); 
	}
	/* ���� �������� ���α׷��� ����ȴ�
	 ��Ȯ�ϰԴ� PC�� ���� �ö��ִ� ���α׷��� (�Ͻ���)����*/
	 
	for(i = 0; i < SIZE; i++)
	{
		printf("�й� : %d, �̸� : %s, ���� : %.1f\n", list[i].number, list[i].name, list[i].grade);
		
	} 
	return 0;
	
}
