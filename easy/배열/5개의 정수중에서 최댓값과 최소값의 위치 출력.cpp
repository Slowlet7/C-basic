#include <stdio.h>
#define number 5 
#include <limits.h>


int main(void)
{
	int i, max, min, index;	//index�� ��ġ
	max = 0;
	index = 0;
	int array[number];		//�迭, number = 5 �̹Ƿ� ũ�Ⱑ 5�� �迭�� �����ѰŴ� 
	// array[0] ~ array[4] 
	
	min = INT_MAX;
	for(i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	printf("���� ū���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1);
	
	for(i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = i;
		} 
	}
	printf("���� �������� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index + 1);
	
	return 0;
}
