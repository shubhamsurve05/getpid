#include<stdio.h>
#include<math.h>
void type(float a,float b,float c);
void area(float a,float b,float c);
int main(void)
{
  float a,b,c;
  printf("Enter the sides of traingle :");
  scanf("%f%f%f",&a,&b,&c);
  if(a<b+c && b<c+a && c<a+b)
  {
         type(a,b,c);
         area(a,b,c); 
  }
  else
          printf("No traingle possible with this all side");
  return 0;
}
void type(float a, float b,float c)
{
  if( (a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (b*b)+(c*c)==(a*a) )
      printf("Right angle traingle\n");
  if(a==b && b==c)
      printf("Equilateral traingle");
  else if(a==b || b==c || c==a)
      printf("Isoscale traingle");
  else
     printf("Scalen tringle"); 
}
void area(float a,float b,float c)
{
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area traingle=%f\n",area);
}
