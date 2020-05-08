#include<stdio.h>
int main(void)
{
  char str[]="India";
  char *p;
  p=str;
  while(*p!='\0')
  {
    printf("Character = %c\t",*p);
    printf("Addresss = %p\n",p);
    p++; 
  }  
  return 0;
}
