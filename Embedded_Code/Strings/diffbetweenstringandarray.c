#include<stdio.h>
#include<string.h>
int main(void)
{
   char  arr[5][10]={"January"};
   char *arrp[5]={"January"};
    
   strcpy(arr[1],"February");
   strcpy(arrp[1],"February");

   scanf("%s",arr[2]);
   scanf("%s",arrp[2]);

   arrp[3]=(char *)malloc(10);
   strcpy(arrp[3],"March");
  
   arrp[4]=(char *)malloc(10);                                                                                             scanf("%s",arrp[4]);
   return 0;
}
