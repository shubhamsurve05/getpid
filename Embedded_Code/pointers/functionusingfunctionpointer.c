#include<stdio.h>
float add(int,float);
int main(void)
{
  float (*fp)(int,float);
  float result;

  fp=add;

  result=add(5,6.6);
  printf("%f\n",result);

  result=(*fp)(5,6.6);
  printf("%f\n",result);
  return 0;
}
float add(int a,float b)
{
  return a+b;
}
