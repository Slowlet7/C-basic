#include <stdio.h>
#include <limits.h>		//INT_MAX �� ����ϱ� ���� �ۼ� 
#define NUMBER 10

// ¦�� �ִ񰪰� Ȧ�� �ּڰ�,  �� ������ ��� 

int main(void)
{
	int i, evenMax, oddMin;
	int evenIndex = 0;		//¦�� ���� 
	int oddIndex = 0;		//Ȧ�� ���� 
	
	int array[NUMBER];		// �����Ͱ� 10   -> 0 ~ 9 
	
	evenMax = 0;
	oddMin = INT_MAX;		
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		
		if(array[i] % 2 == 0 && evenMax < array[i])		 
		{
			evenMax = array[i];				// ¦���ִ� < array[i] �̸� �ִ� �����ϵ��� �Ѵ�. 
			evenIndex = i;					// ���ŵ� �ִ��� ������ ���� 
		}
		
		else if(oddMin > array[i])
		{
			oddMin  = array[i];				// Ȧ���ּڰ� > array[i] �̸� �ּڰ� �����ϵ��� �Ѵ�. 
			oddIndex = i;					// ���ŵ� �ּڰ��� ������ ���� 
			
		}	
		
	}
	printf("¦�� �ִ��� %d, Ȧ�� �ּڰ��� %d�Դϴ�.\n", evenMax, oddMin);
	printf("¦�� �ִ��� %d ��°�� �ֽ��ϴ�. Ȧ�� �ּڰ��� %d��°�� �ֽ��ϴ�.", evenIndex + 1, oddIndex + 1);	
		// ��ǻ�ʹ� 0���� �����ؼ� �ö󰡹Ƿ� + 1�� ���ش�. 
	return 0;
}
