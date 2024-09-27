#include <stdio.h>
#include <math.h>

int main()
{
  float L1, L2, L3;
  scanf("%f", &L1);
  scanf("%f", &L2);
  scanf("%f", &L3);
  float T = (L1 + L2 + L3) / 2.0;
  float a = sqrt((T * (T - L1) * (T - L2) * (T - L3)));
  printf("A AREA DO TRIANGULO E = %.2f\n", a);
  return 0;
}