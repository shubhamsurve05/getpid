#include<stdio.h>
#define MAX 50
int BinarySearch(int arr[],int size,int item);
int main(void)
{
  int i,size,item,arr[MAX],index;
  printf("Enter The Number Of Elements :");
  scanf("%d",&size);

  printf("Enter the elements(in sorted order) : \n");
  for(i=0; i<size ;i++)
                scanf("%d",&arr[i]);
  printf("Enter the item to be searched :");
  scanf("%d",&item);
  index=BinarySearch(arr,size,item);

  if(index==-1)
           printf("%d not found in array\n",item);
  else
           printf("%d found at position %d\n",item,index) ;
  return 0;     
}
int BinarySearch(int arr[],int size,int item)
{
   int low=0,up=size-1,mid;
   while(low<=up)
   {
       mid=(low+up)/2;
       if(item > arr[mid])
                  low=mid+1;
       else if(item < arr[mid])
                  up=mid-1;
       else
                  return mid;     
   }
   return -1;
}
