#include  <stdio.h>

int main(void){

    // �ð�, ��, �� ���� ���� 
     int sec;
     int min, hour; 

     printf ("���� �Է�");
     scanf("%d", &sec);

     hour = sec/3600;	 //1�ð� = 60�� = 3600��
     
     sec %= 3600;		// sec < 3600  -> sec % 3600 = sec; 
     min = sec/60;	 
     sec %= 60;			

     printf("�ð�: %2d �ð�\n", hour);
     printf("��   : %2d ��\n", min);
     printf("��   : %2d ��\n", sec);
    

     return 0;

}
