#include <stdio.h>

int main()
{
  float a, b, c, d;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);

  float detM = a * d - b * c;

  printf("O VALOR DO DETERMINANTE E = %.2f\n", detM);

  return 0;
}