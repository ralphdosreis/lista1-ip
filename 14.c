#include <stdio.h>

int main()
{
  int n, priAl, segAl, terAl, quarAl;
  scanf("%d", &n);
  priAl = n / 100;
  segAl = (n / 10) % 10;
  terAl = n % 10;
  quarAl = (priAl + segAl * 3 + terAl * 5) % 7;
  printf("O NOVO NUMERO E = %d%d%d%d", priAl, segAl, terAl, quarAl);
  return 0;
}