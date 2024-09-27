#include <stdio.h>
#define PI 3.14159

int main()
{
  float raio, alt, ac, al, at;
  scanf("%f", &raio);
  scanf("%f", &alt);
  ac = PI * raio * raio;
  al = 2 * PI * raio * alt;
  at = 2 * ac + al;
  printf("O VALOR DO CUSTO E = %.2f", at * 100);
  return 0;
}