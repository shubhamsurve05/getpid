#include<stdio.h>
void selection(int age,float ht);
int main(void)
{
  int age;
  float ht;
  printf("Enter age and height");
  scanf("%d%f",&age,&ht);
  selection(age,ht);
  return 0;
}
void selection(int age,float ht)
{
  if(age>25)
  {
    printf("Age should be less then 25\n");
    return;
  }
  if(ht<5)
  {
    printf("Height should be more then 5\n");
    return;                                                                                                                                                                                                          }

  printf("Selected\n");
}


