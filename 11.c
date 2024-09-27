#include <stdio.h>

int main()
{
  float pC, pD, pI;
  scanf("%f", &pC);
  scanf("%f", &pD);
  scanf("%f", &pI);
  float pF = pC + (pC * (pD / 100)) + (pC * (pI / 100));
  printf("O VALOR DO CARRO E = %.2f\n", pF);
  return 0;
}