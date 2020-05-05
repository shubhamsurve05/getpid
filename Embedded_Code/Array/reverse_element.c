#include<stdio.h>
int main(void)
{
  int i,j,temp,arr[10]={1,2,3,4,5,6,7,8,9,10};
  for(i=0,j=10;i<j;i++,j--)
  {
     temp=arr[i];
     arr[i]=arr[j];
     temp=arr[j];
  }
  printf("After Reversing the array is :");
  for(i=0;i<10;i++)
            printf("%d",arr[i]);
  printf("\n");
  return 0;
}
