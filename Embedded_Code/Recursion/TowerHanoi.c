#include<stdio.h>
void tofh(int ndisk,char source,char temp,char dest);
int main(void)
{
  char source='A',temp='B',dest='C';
  int ndisk;
  printf("Enter number of disk");
  scanf("%d", &ndisk);
  printf("Sequance is : \n");
  tofh(ndisk,source,temp,dest);
  return 0;   
}
void tofh(int ndisk,char source,char temp,char dest)
{
  if(ndisk==1)
  {
    printf("Move disk id %d from %c--->%c\n",ndisk,source,dest);
    return;
  }
  tofh(ndisk-1,source,dest,temp);
  printf("Move disk %d from %c--->%c\n",ndisk,source,dest);
  tofh(ndisk-1,temp,source,dest);
}
