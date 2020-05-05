#include<stdio.h>
int main(void)
{
  int i,j,temp,arr[10]={1,2,3,4,5,6,7,8,9,10};
  int small,large;
  small=large=arr[0];
  for(i=1;i<10;i++)
  {
    if(arr[i]<small)
             small=arr[i];
    if(arr[i]>small)
             large=arr[i];
  }
  printf("smallest=%d,Largest=%d\n",small,large);
  return 0;   
}
