#include<stdio.h>
void func1();
int main(void)
{
  printf("Address of function main() is :%p\n",main);
  printf("Address of function func1() is :%p\n",func1);
  return 0;
}
void func1()
{
  printf("C in depth");
}
