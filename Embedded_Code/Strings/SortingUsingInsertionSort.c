#include<stdio.h>
#define MAX 100
int main(void)
{
  int arr[MAX],i,j,k,n;
  printf("Enter the number of elements :");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
      printf("Enter elemnts %d:",i+1);
      scanf("%d",&arr[i]);
  } 
  for(i=1; i<n ;i++)
  {
    k=arr[j];
    for(j=i-1 ; j>=0 && k<arr[j]; j--)
                    arr[j+1]=arr[j];
    arr[j+1]=k; 
  }
  printf("Sorted list is :\n");
  for(i=0;i<n;i++)
           printf("%d",arr[i]);
  printf("\n");
  return 0;   
}

