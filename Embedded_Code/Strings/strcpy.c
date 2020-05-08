#include<stdio.h>
#include<string.h>
int main(void)
{
  char str1[10],str2[10];
  printf("Enter a string :");
  scanf("%s",str2);
  strcpy(str1,str2);
  printf("First String :%s \t\t Second string : %s\n",str1,str2);
  strcpy(str1,"nashik");
  strcpy(str2,"Pune");
  printf("First String : %s \t\t Second String : %s\n",str1,str2);
  return 0;  
}
