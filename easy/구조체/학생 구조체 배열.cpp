#include <stdio.h>
#define SIZE 3

struct student{
	int number;
	char name[21];
	double grade;		//GPA 학점을 의미 
};

int main(void)
{
	struct student list[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("<1번째 학생>\n");
		printf("학번을 입력하세요 : ");
		scanf("%d", &list[i].number); 
		printf("<2번째 학생>\n");
		printf("이름을 입력하세요 : ");
		scanf("%s", &list[i].name); 
		printf("<3번째 학생>\n");
		printf("학점을 입력하세요 : ");
		scanf("%lf", &list[i].grade); 
	}
	/* 여기 정보들은 프로그램에 저장된다
	 정확하게는 PC의 램에 올라가있는 프로그램에 (일시적)저장*/
	 
	for(i = 0; i < SIZE; i++)
	{
		printf("학번 : %d, 이름 : %s, 학점 : %.1f\n", list[i].number, list[i].name, list[i].grade);
		
	} 
	return 0;
	
}
