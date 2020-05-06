#include<stdio.h>
#define MAX 100
int main(void)
{
  int arr[MAX],i,j,n,temp,min;
  printf("Enter the number of elemnts");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    printf("Enter the element %d :",i+1);
    scanf("%d",&arr[i]);
  }
  for(i=0; i<=n-1; i++)
  {
    min=i;
    for(j=i+1; j<n ;j++)
    {
       if(arr[min]>arr[j])
       arr[i]=arr[min];
       arr[min]=temp; 
    }
  }

  printf("Sorted list is: \n");
  for(i=0;i<n;i++)
      printf("%d",arr[i]);
   printf("\n");
  return 0;
}   
