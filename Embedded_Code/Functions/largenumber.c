#include<stdio.h>
int larger(int x,int y);
int main(void)
{
  int x,y;
  printf("Enter Two Number");
  scanf("%d%d",&x,&y);
  printf("Larger number=%d\n",larger(x,y));
  return 0;
}
int larger(int x,int y)
{
  return x>y?x:y;
}
