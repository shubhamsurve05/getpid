#include<stdio.h>
int rseries(int n);
int main(void)
{
  int n;
  printf("Enter number of terms");
  scanf("%d",&n);
  printf("\b\b = %d\n\n\n",rseries(n));
  return 0;
}
int rseries(int n)
{
  int sum;
  if(n==0)
        return 0;
  return n + rseries(n-1);
  printf("%d + ",n); 
}
