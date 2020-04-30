#include <stdio.h>

int embetronicx;   //uninitialized global variable. It will stored in bss

int main(void)
{
    static int i;  //Uninitialized static variable stored in bss 
    return 0;
}
