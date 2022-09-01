#include <stdio.h>

/* 서로 다른 n개의 물건중 순서를 임의로(순서 생각x)
r개를 택할 때, n개에서 r개를 택하는 조합이라고 하고,
이 조합을 nCr 이라고 한다.

nCr은 r = 0 이거나 r = n 이라면 1이고, 그렇지 않다면, 
nCr(n - 1, r - 1) + nCr(n - 1, r) 과 같은 값이다. 
*/

int nCr(int n, int r)
{
	if(r == 0 || r == n)
	{
		return 1;
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	} 
}

int main(void)
{
	int n, r;
	printf("nCr에서 n 과 r 을 입력(표기법: n r)");
	scanf("%d %d", &n, &r);
	printf("%d", nCr(n , r));
	
	return 0;
}
