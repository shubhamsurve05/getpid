#include<stdio.h>
#include<string.h>
#define N 5
int main(void)
{
  char *arrp[N]={"white","red","green","yellow","blue"};
  int i,j;
  char *temp;
  
  printf("Before Sorting: \n");
  for(i=0;i<N;i++)
           printf("%s\t",arrp[i]);
  printf("\n") ;

  printf("Before Sorting : \n");
  for(i=0; i<N ;i++)
    for(j=i+1; j<N; j++)
      if(strcmp(arrp[i],arrp[j])>0)
      {
         temp=arrp[i];
         arrp[i]=arrp[j];
         arrp[j]=temp;    
      }
  printf("After Sorting :\n");
  for(i=0;i<N;i++)
         printf("%s\t",arrp[i]);
  printf("\n");
  return 0;                  
}
