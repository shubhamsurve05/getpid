#include<stdio.h>
void displaymenu(void);

int main(void)
{
  int choice;
  displaymenu();
  printf("Enter Your Choice");
  scanf("%d",&choice);
  return 0;
}
void displaymenu(void)
{
  printf("1.Create database\n");
  printf("2.Insert new record\n");
  printf("3.Modify a record\n");
  printf("4.Delete a Record\n");
  printf("5.Display a Record\n");
  printf("6.Exit\n");
}
