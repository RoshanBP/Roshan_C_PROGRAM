#include<stdio.h>
#include<string.h>
int main(){
char name1[100];
printf("Enter your first name:");
scanf("%s",name1);
char name2[100];
  printf("\nEnter your second name:");
  scanf("%s",name2);
char fullname[100];
  printf("Full name:\n%s",strcat(name1,name2));
  char length=strlen("jhvhjjhjhg");
  printf("\nlength of full name:%d",length);
  return 0;
}