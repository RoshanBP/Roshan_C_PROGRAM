#include<stdio.h>
#include<string.h>
int main() {
  char str[50],rev[50];
  printf("Enter a string:");
  scanf("%s",str);
  strcpy(rev,str);
  strrev(rev);
  if(strcmp(str,rev)==0){
    printf("it is a palindrome number");
    
  }else{
    printf("it is not a palindrome number");
  
  }
  return 0;
}