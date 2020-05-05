#include<stdio.h>
int main(void)
{
  int arr[5],i,sum=0;

  for(i=0;i<10;i++)
  {
     printf("\n Enter a value of arr[%d] :",i);
     sum+=arr[i];
  }
  printf("Sum=%d\n",sum);
  return 0;
}
