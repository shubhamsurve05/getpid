#include<stdio.h>
void func1(void);
void func2(void);
int a,b=6;
int main(void)
{
  printf("Inside main() : a=%d,b=%d\n" ,a,b);
  func1();
  func2();
  return 0; 
}
void func1(void)
{
  printf("Inside Func1() : a=%d,b=%d\n",a,b);
}
void func2(void)
{
  int a=8;
  printf("Inside func2() : a=%d,b=%d\n",a,b);
}
