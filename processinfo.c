#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
  int mypid , myppid;
  printf("Program to know pid and ppid");
  mypid = getpid();
  myppid = getppid();
  printf("Processes id %d\n",mypid);
  printf("Parent Processes id %d\n",myppid);
  system("ps -ef");
  return 0;   
}
