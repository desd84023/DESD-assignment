#include <stdio.h>
 
int main()
{
    float a,b,c;
	float sum;
	float avg;
	printf("enter three numbers");
	scanf("%f%f%f",&a,&b,&c);
	sum=(a+b+c);
	avg=(sum/3.0);
	printf("the avgerage number are %f",avg);
    return 0;   
}

