#include<stdio.h>
int main(void)
{
  int a=5;
  int *p;
  p=&a;
  
  printf("Values of p = Adress of a = %p\n",p);
  printf("Values of p = Adress of a = %p\n",++p);
  printf("Values of p = Adress of a = %p\n",p++);
  printf("Values of p = Adress of a = %p\n",p);
  
  printf("Values of p = Adress of a = %p\n",--p);
  printf("Values of p = Adress of a = %p\n",p--);
  printf("Values of p = Adress of a = %p\n",p);
  
  return 0;
}
