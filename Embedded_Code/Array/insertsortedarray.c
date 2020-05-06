#include<stdio.h>
#define SIZE 10
int main(void)
{
  int arr[SIZE];
  int i,item;
  printf("Enter element of array in sorted order");
  for(i=0;i<SIZE-1;i++)
               scanf("%d",&arr[i]);
  printf("Enter the item to be inserted");
  scanf("%d",&item);
  for(i=SIZE-2; item<arr[i] && i>=0; i--)
                        arr[i+1]=arr[i];
  arr[i+1]=item;

  for(i=0;i<SIZE;i++)
  printf("%d",arr[i]);
  printf("\n");
  return 0;       
}
