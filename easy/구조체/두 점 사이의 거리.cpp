#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xDiff, yDiff;
	double result;
	
	printf("p1의 좌표 입력 : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("p2의 좌표 입력 : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xDiff = p1.x - p2.x;
	yDiff = p1.y - p2.y;
	
	result = sqrt((xDiff * xDiff)+ (yDiff * yDiff));
	
	printf("두 점 사이의 거리는 %.2f입니다", result);
	
	
	
} 
