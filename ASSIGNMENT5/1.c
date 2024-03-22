#include <stdio.h>
int main()
{
    float eng, phy, chem, math, comp; 
    float total, average;
    printf("Enter marks of five subjects:in 100 \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
   
    return 0;
}
