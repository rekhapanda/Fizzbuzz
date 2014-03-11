#include <stdio.h>

int main(char *argc,int argv){
  int i;
  for(i=1;i<=100;i++){
    if((i%3)!=0 && (i%5)!=0)     //checks for not a multiple of 3 or 5
      printf("%d",i);
    if(i%3==0)
      printf("Fizz");           //checks for the multiples of 3
    if(i%5==0)
      printf("Buzz");           //checks for the multiples of 5
    printf("\n");
  }
  return 0;
}
