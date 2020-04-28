//おみくじかな

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand((unsigned int)time(NULL));
    int omikuji=rand()%10+1;
    //ptintf("%d\n",omikuji);

    if (omikuji==10){
      printf ("大吉\n");
  
   }else if (omikuji>=8){
      printf("中吉\n");

   }else if(omikuji>=5){
      printf("小吉\n");

   }else if(omikuji>=2){
      printf("凶\n");

   }else{
      printf("大凶\n");

   }
int saikoro=rand()%2+1;
    if(saikoro==1){
      printf("また来てね！");

   }else{
      printf("今日がいい日になりますように");
   }
}