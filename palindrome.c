#include<stdio.h>
int main(){
  int  num,reverse=0,remainder,original;
  printf("Enter a number:");
  scanf("%d",&num);
  original=num;
  while(num!=0){
    remainder= num % 10;
    reverse= reverse * 10 + remainder;
    num/= 10;
  }
  if(original==reverse){
    printf("Given number is palindrome",original);
  }else{
    printf("given number is not palindome",original);
       }
  return 0;
}
