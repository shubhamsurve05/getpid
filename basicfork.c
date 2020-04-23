#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
  fork();
  fork(); 
  printf("called fork() system call\n");
  return 0; 
}
