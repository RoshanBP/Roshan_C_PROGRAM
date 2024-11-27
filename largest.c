#include<stdio.h>
int largest(int a,int b,int c)
{
  if(a>=b&&a>=c) return a;
  if(b>=a&&b>=c) return b;
  return c;
}
int main()
{
  printf("Enter three numbers");
  int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
  printf("The largest number is %d",largest(x,y,z));
  return 0;
}