#include<stdio.h>

int main(void)
{
  int a=87;
  float b=4.5;
  int *p1=&a;
  int *p2=&b;
  
  printf("Value of p1=Address of a = %p\n",p1);
  printf("value of p2=Address of b = %p\n ",p2);
  
  printf("Adress of p1 = %p\n" , &p1);
  printf("Adress of p2 = %p\n" , &p2);

  printf("Value of a = %d %d %d\n",a,*p1,*(&a));
  printf("Value of b = %.1f %.1f %.1f\n",b,*p2,*(&b));

  return 0;
}
