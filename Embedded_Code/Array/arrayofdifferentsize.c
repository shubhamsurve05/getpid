#include<stdio.h>
int main(void)
{
  int a[5]={2,4,6,8,10};
  int b[8]={1,3,5,7,9,11,13,15};
  int c[10]={1,2,3,4,5,6,7,8,9,10};
  printf("Sum of element of array a:",add(a,5));
  printf("Sum of element of array b:",add(b,8));
  printf("Sum of element of array a:",add(c,10));
}
void add(int arr[],int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
       sum+=arr[i];
  return sum;
}
