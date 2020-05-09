#include<stdio.h>
#define MAX 100
int main(void)
{
  int arr1[MAX],arr2[MAX],arr3[2*MAX],n1,n2,i;
  printf("Enter the number of element in array1");
  scanf("%d",&n1);
  printf("Enter all the element in sorted arrray");
  for(i=0; i<n1 ;i++)
  {
    printf("Enter element %d: ",i+1);
    scanf("%d",arr1[i]);
  } 
  merge(arr1,arr2,arr3,n1,n2);
  printf("\n Merged list");
  for(i=0; i<n1+n2 ;i++)
          printf("%d",arr3[i]);
  printf("\n");
  return 0;            
}
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
  int i,j,k;
  i=0;
  j=0; 
  k=0;
  while((i<=n1-1)&&(j<=n2-1)) 
  {
    if(arr1[i]<arr2[j])
           arr3[k++]=arr1[i++];
    else 
           arr3[k++]=arr2[j++];      
  }
  while(i<=n1-1)
           arr3[k++]=arr1[i++];
  while(j<=n2-1)
           arr3[k++]=arr2[j++]; 
}
