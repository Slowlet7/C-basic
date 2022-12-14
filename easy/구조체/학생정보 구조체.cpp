// 구조체는 여러 개의 데이터를 하나로 묶어서 사용할 수 있다.
//후에 객체지향 프로그래밍에서는 클래스 개념으로 확장됨
//배열: 여러 개의 같은 자료형들의 묶음
//구조체 : 서로 다른 자료형들의 묶음 

// double 형 은 입력받을때 (scanf)  %lf 로 써야함.
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct student {			//구조체 student 
	int number;		//번호 
	char name[10];	//이름 
	float grade;	//학점? 
}; 

int main(void)
{
	struct student s;		// 구조체 student의 변수 s 
	
	printf("학번을 입력하세요 : ", s.number);
	scanf("%d", &s.number);
	printf("이름을 입력하세요 : ", s.name);
	scanf("%s", &s.name);
	printf("학점을 입력하세요 : ", s.grade); 
	scanf("%f", &s.grade);
	
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f", s.grade);
	
	return 0;
}  
