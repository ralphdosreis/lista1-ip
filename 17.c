#include <stdio.h>

int main()
{
  int n, cen, fift, dez, uni;
  scanf("%d", &n);
  cen = n / 100;
  fift = (n % 100) / 50;
  dez = ((n % 100) / 10) - fift * 5;
  uni = (n % 100) % 10;
  printf("NOTAS DE 100 = %d\n", cen);
  printf("NOTAS DE 50 = %d\n", fift);
  printf("NOTAS DE 10 = %d\n", dez);
  printf("MOEDAS DE 1 = %d\n", uni);
  return 0;
}