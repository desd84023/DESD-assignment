#include<stdio.h>
#include<math.h>

int main(void)
{
  float a,b,c,Perimeter;
  float s;
  float area;
  float d;
  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
   
  Perimeter=(a+b+c);
  s=(a+b+c)/2;
 d=(s*(s-a)*(s-b)*(s-c));
 area=sqrt(d);
   
  printf("\n Perimeter of Traiangle = %.2f\n",Perimeter);
  printf("\n Area of triangle = %.2f\n",area);

  return 0;
}
