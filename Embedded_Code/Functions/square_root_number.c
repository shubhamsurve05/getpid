#include<stdio.h>
#include<math.h>
int main(void)
{
  double n,s;
  printf("Enter a number");
  scanf("%1f",&n);
  s=sqrt(n);
  printf("Square root of %.21f is %.21f\n",n,s);
  return 0; 
}
