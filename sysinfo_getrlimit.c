#include<stdio.h>
#include<sys/time.h>
#include<sys/resource.h>

void main(void) {
   struct rlimit res_limit;
   int retval;
   int resources[] = {RLIMIT_NOFILE, RLIMIT_NPROC, RLIMIT_STACK};
   int max_res;
   int counter = 0;
   printf("Details of resource limits for NOFILE, NPROC, STACK are as follows: \n");
   max_res = sizeof(resources)/sizeof(int);
   while (counter < max_res) {
      retval = getrlimit(resources[counter], &res_limit);
      if (retval == -1) {
         perror("getrlimit error");
         return;
      }
      printf("Soft Limit is %ld\n", res_limit.rlim_cur);
      printf("Hard Limit (ceiling) is %ld\n", res_limit.rlim_max);
      counter++;
   }
   return;
}
