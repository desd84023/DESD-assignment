#include<stdio.h>

int main(void)
{
  const int q1 = 30;               // Quantity over this level are at discount1
  const int q2 = 50;               // Quantity over this level are at discount2
  const double d1 = 0.10;       // 10% discount
  const double d2 = 0.15;       // 15% discount
  const double unit_p = 5.0;       // Basic unit price
  int q = 0;
  int total = 0;              // 0 to 30 at full price
  int a1 = 0;                  // 31 to 50 at level1 price
  int a2 = 0;                  // Over 50 at level2 price

  printf("Enter the quantity that you require: ");
  scanf("%d", &q);

  if (q>50)                     // Quantity over 50
  {
    total = q1;
    a1 = q2 - q1;
    a2 = q - q2;
  }
  else if (q > 30)                // Quantity is from 30 to 50
  {
    total = q1;
    a1 = q - q1;
  }
  else
    total = q;

  printf("The total price for %d items is $ %.2lf\n", q,
    unit_p*(total + (1.0 - d1)*a1 + (1.0 - d2)*a2));
  return 0;
}

