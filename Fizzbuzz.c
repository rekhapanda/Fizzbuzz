#include <stdio.h>

int main(char *argc,int argv){
  int i;
  for(i=1;i<=100;i++){
    if((i%3)!=0 && (i%5)!=0)     //checks for not a multiple of 3 or 5
      printf("%d",i);
    if(i%3==0)                  //checks for the multiples of 3
      printf("Fizz");           
    if(i%5==0)                  //checks for the multiples of 5
      printf("Buzz");           
    printf("\n");
  }
  return 0;
}
