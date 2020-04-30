#include <stdio.h>

int embetronicx = 100;   //Initialized Global variable stored in Initialized Data Segment

int main(void)
{
    static int i = 10;  //Initialized static variable stored in Initialized Data Segment
    return 0;
}
