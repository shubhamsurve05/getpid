#include<stdio.h>
long int fact(int n);
int main(void)
{
  int num;

  printf("Enter a number"); 
  scanf("%d",&num);
  if(num<0)
        printf("No Factorial For Negative Number\n");
  else
        printf("factorial of %d is %ld\n",num,fact(num));
  return 0; 
}
long int fact(int n)
{
  if(n==0)
         return 0;
  return (n * fact(n-1)); 
}
