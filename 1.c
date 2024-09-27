#include <stdio.h>

int main()
{
  double sal, kw;
  double valor_kw;

  scanf("%lf%lf", &sal, &kw);
  valor_kw = sal * 0.7 / 100;

  printf("Custo por kW: R$ %.2lf\n", valor_kw);
  printf("Custo do consumo: R$ %.2lf\n", valor_kw * kw);
  printf("Custo com desconto: R$ %.2lf\n", valor_kw * kw * 0.9);

  return 0;
}