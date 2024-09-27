#include <stdio.h>
#include <math.h>

int main()
{
  float h, ar, r3;
  scanf("%f%f", &h, &ar);
  r3 = sqrt(3);
  float ab = (3.0 * (ar * ar) * r3) / 2.0;
  float v = (ab * h) / 3.0;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS", v);
  return 0;
}