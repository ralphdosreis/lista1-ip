#include <stdio.h>

int main()
{
  float f, pol, c, mil;
  scanf("%f", &f);
  scanf("%f", &pol);
  c = (5 * (f - 32)) / 9;
  mil = pol * 25.4;
  printf("O VALOR EM CELSIUS = %.2f\n", c);
  printf("A QUANTIDADE DE CHUVA E = %.2f\n", mil);
  return 0;
}