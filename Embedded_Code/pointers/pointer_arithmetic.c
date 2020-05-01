#include<stdio.h>
int main(void)
{
  int a=5,*pi=&a;
  int b='x',*pc=&b;
  float c=5.5,*pf=&c;

  printf("value of pi=Address of a=%p\n",pi);
  printf("value of pc=Address of b=%p\n",pc);
  printf("value of pf=Address of c=%p\n",pf);
  
  pi++;
  pc++;
  pf++;

  printf("value of pi=Address of a=%p\n",pi);                                                                                                                                                                        printf("value of pc=Address of b=%p\n",pc);                                                                                                                                                                        printf("value of pf=Address of c=%p\n",pf);

  return 0;   
}
