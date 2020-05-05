#include<stdio.h>
int main(void)
{
  int arr[5],i;
  for(i=0;i<5;i++)
  {
    printf("Enter a value for arr[%d] :",i);
    scanf("%d",&arr[i]);
  }
  printf("The Array Element Are: \n");
  for(i=0;i<5;i++)
          printf("%d\t",arr[i]);
   printf("\n");
   return 0;
}
