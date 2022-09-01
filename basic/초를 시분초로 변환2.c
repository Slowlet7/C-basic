#include  <stdio.h>

int main(void){

    // 시간, 분, 초 변수 선언 
     int sec;
     int min, hour; 

     printf ("초의 입력");
     scanf("%d", &sec);

     hour = sec/3600;	 //1시간 = 60분 = 3600초
     
     sec %= 3600;		// sec < 3600  -> sec % 3600 = sec; 
     min = sec/60;	 
     sec %= 60;			

     printf("시간: %2d 시간\n", hour);
     printf("분   : %2d 분\n", min);
     printf("초   : %2d 초\n", sec);
    

     return 0;

}
