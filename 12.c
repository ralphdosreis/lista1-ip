#include <stdio.h>

int main()
{
  double m, a, t, v, s, W;
  scanf("%lf", &m);
  scanf("%lf", &a);
  scanf("%lf", &t);
  m = m * 1000;
  v = (a * 3.6) * t;
  s = (a * (t * t)) / 2.0;
  W = (m * ((a * t) * (a * t))) / 2.0;
  printf("VELOCIDADE = %.2lf\n", v);
  printf("ESPACO PERCORRIDO = %.2lf\n", s);
  printf("TRABALHO REALIZADO = %.2lf\n", W);
  return 0;
}