#include<stdio.h>
#include<string.h>
int main(void)
{
  char str[10];
  printf("Enter A string");
  gets(str);
  printf("Length of the string is : %u\n",strlen(str));
  return 0; 
}
