#include<stdio.h>
int main(void)
{
  int i;
  char *arrp[]={
                 "white",
                 "red",
                 "green",
                 "yellow",
                 "blue"  
               };
   for(i=0;i<5;i++)
   {
      printf("Strings : %s\n",arrp[i]);
      printf("Address of string : %p\n",arrp[i]);
      printf("Address of strings is stroed at : %p\n",arrp+i);
   }
   return 0;   
}

