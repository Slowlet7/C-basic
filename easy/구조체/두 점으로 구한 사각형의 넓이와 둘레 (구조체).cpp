#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
	
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int a, h, area, peri;		//perimeter = 사각형의 둘레
	 
	printf("p1 좌표 입력 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("p2 좌표 입력 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	h = abs(r.p1.y - r.p2.y);
	a = abs(r.p2.x - r.p1.x);
	area = a * h;
	peri = a * 2  + h * 2;
	
	printf("두 점으로 구한 사각형의 넓이는 %d\n둘레는%d입니다.", area, peri);
	
	return 0;
}
