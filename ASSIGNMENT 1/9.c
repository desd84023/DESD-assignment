#include<stdio.h>
int main(){
   float fahrenheit, celsius;
  
   printf("Enter Fahrenheit: ");
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("Celsius: %f\n ", celsius);
   printf("enter celsius:");
   scanf("%f",&celsius);
   fahrenheit=32+(celsius*9/5);
   printf("fahrenheit=%f\n",fahrenheit);
   return 0;
}
