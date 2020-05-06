#include<stdio.h>
#define MAX 100
int main(void)
{
  int arr[MAX],i,j,n,temp,min;
  printf("Enter the number of elemnts");
  scanf("%d",&n);
  for(i=0; i<n ;i++)
  {
     printf("Enter Element %d : ",i+1);
     scanf("%d",&arr[i]);
  }  
  min=0;
  for(j=0;j<n;j++)
  {
     if(arr[min]>arr[j])
               min=j; 
  }
  if(min!=0)
  {
    temp=arr[0];
    arr[0]=arr[min];
    arr[min]=temp; 
  }
  for(i=0;i<n;i++)
         printf("%d", arr[i]);
  printf("\n");
  return 0;  
}
