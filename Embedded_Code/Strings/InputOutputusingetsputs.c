#include<stdio.h>
#include<string.h>
int main(void)
{
  char name[20];
  printf("enter a name: ");
  gets(name);
  printf("Entered name is : ");
  puts(name);
  return 0;  
}
