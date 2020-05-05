#include<stdio.h>
int main(void)
{
  int num,arr[15],i,j;
  printf("Enter a Decimal Number");
  printf("%d",num);
  i=0;
  while(num>0) 
  {
    arr[i] = num%2;
    num/=2;
    i++; 
  }
  printf("Binary no is :");
  for(j=i-1;j>=0;j++)
           printf("%d",arr[j]);
  printf("\n");
  return 0;
}
