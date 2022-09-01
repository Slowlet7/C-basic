#include <stdio.h>

/* 두개의 구조체는 서로 같은 타입의 구조체여도
직접 비교가 불가능하다  */

struct point{
	int x;
	int y;
};

int main()
{
	struct point p1;
	struct point p2;
	
	p1.x=1;
	p1.y=2;

	p2.x=1;
	p2.y=2;
	
/*  if(p1 == p2) 	이렇게 직접 비교하면 오류남 
	{
		
	}
*/
	if((p1.x == p2.x) && (p1.y == p2.y)) //옳은 방식 
	{
		printf("p1 과 p2가 같습니다"); 
	}
	
	return 0;
}

