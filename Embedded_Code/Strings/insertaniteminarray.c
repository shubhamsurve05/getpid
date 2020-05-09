#include<stdio.h>
#define SIZE 10
int main(void)
{
  int arr[SIZE];
  int i,item,index;
  printf("Enter elements of the array: \n");
  for(i=0; i<SIZE ;i++)
             scanf("%d",&arr[i]);
  printf("Enter the item to be inserted");
  scanf("%d",&item);
  printf("Enter the index where item is to be inserted: ");
  scanf("%d",&index);

  for(i=SIZE-2 ; i>=index; i--)
              arr[i+1]=arr[i]; 
  arr[i+1]=item;
  
  for(i=0; i<SIZE; i++)
              printf("%d",arr[i]);
  printf("\n");
  return 0;    
}
