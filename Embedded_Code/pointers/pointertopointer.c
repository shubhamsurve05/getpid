#include<stdio.h>
int main(void)
{
  int a=5;
  int *pa;
  int **ppa;
  pa=&a;
  ppa=&pa;

  printf("Address of a=%p\n",&a);
  printf("Value of pa=Adresss of a=%p\n",pa);
  printf("Address of *pa=Value of a=%d\n",*pa);
  printf("Adress of pa=%p\n",&pa);

  printf("Address of a=%p\n",ppa);                                                                                                                                                                                    printf("Value of pa=Adresss of a=%p\n",*ppa);                                                                                                                                                                        printf("Address of *pa=Value of a=%d\n",**ppa);                                                                                                                                                                 printf("Adress of pa=%p\n",&ppa);  
  
  return 0; 
}
