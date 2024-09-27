#include <stdio.h>

int main() {
  int h, m, s, converS;
  scanf("%d%d%d", &h, &m, &s);
  converS = (h*3600) + (m*60) + s;
  printf("O TEMPO EM SEGUNDOS E = %d\n", converS);
  return 0;
}