#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[11] = "I Love You";		// �������� \0�� �־�� ���ڿ��� �ν��Ѵ�. Ȯ���ڸ� cpp �� �ƴ� c�� �ϸ� 10���ε����� 
	char result[5] = "Love";
	
	strcpy(result, input);
	printf("���ڿ� ���� : %s\n", result);
	
	// strcpy(result, input) ->result�� input�� �����Ѵ�.(�������x)
	 
	return 0;
}
