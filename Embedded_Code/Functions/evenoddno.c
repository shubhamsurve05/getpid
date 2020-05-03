#include<stdio.h>
void func(int n);
int main(void)
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  return 0; 
}
void find(int n)
{
  if(n%2==0)
         printf("%d is even\n",n);
  else
         printf("%d is odd\n",n);
}

