#include <stdio.h>

int main()
{
  int n1, n2;
  scanf("%i%i", &n1, &n2);
  float m = (n1 + n2) / 2.0;
  printf("%.3f", m);
  return 0;
}