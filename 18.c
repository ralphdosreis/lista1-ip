#include <stdio.h>

int main()
{
  float a, b, c, d, e, f;
  float x, y;
  float det, detX, detY;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);
  scanf("%f", &f);

  det = a * e - b * d;
  detX = c * e - b * f;
  detY = a * f - c * d;

  if (det != 0)
  {
    x = detX / det;
    y = detY / det;

    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);
  }
  else
  {
    printf("O sistema nao tem solucao unica.\n");
  }

  return 0;
}