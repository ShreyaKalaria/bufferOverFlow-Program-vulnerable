#include <stdio.h>
//#include <conio.h>
#include <string.h>
//this script created By Abdalrahman(0x80)
int main(void){
  char buffer[15];
  int A0x80=0;
   printf("Enter Your String: ");
    gets(buffer);
      if(strcmp(buffer,"0x80")){
         printf("Successful");
  }else{
      printf("FALED");
      A0x80=1;

    } 
if(A0x80){
  printf("You Are ROOT");

 }
return 0;
}
