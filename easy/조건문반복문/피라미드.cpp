#include <stdio.h>
#define N 20
int main(void)
{
	int i,j;
	for(i = 0; i < N; i++)
	{
		for(j = N - i - 1; j > 0; j--)
		{
			printf(" ");
		}
		
		for(j = 0; j > i; j++)
		{
			printf("A ");
		}
		
		for(j = 0; j < i - 1; j++)
		{
			printf("A ");
		}
		printf("\n");
	}
	return 0;
}
