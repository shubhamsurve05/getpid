#include<stdio.h>
int main(void)
{
  int arr[5]={5,10,15,20,25};
  int i;
  for(i=0;i<5;i++)
  {
    printf("value of arr[%d] = %d\t",i,arr[i]);
    printf("Address of arr[%d] = %p\n",i,&arr[i]);
  }
  return 0;

}
