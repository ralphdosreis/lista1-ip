#include <stdio.h>
#include <math.h>

int main()
{
  float n, dec1, dec2, dec3, newN1, newN2, newN3;
  int int1, int2, int3, alg1, alg2, alg3;
  scanf("%f", &n);
  dec1 = n * 100;
  dec2 = n * 1000;
  dec3 = n * 10000;
  int1 = dec1;
  int2 = dec2;
  int3 = dec3;
  alg1 = int1 % 10;
  alg2 = int2 % 10;
  alg3 = int3 % 10;
  if (alg1 >= 5)
  {
    newN1 = ((int1 - alg1) + 10) / 100.00;
  }
  else
  {
    newN1 = (int1 - alg1) / 100.00;
  }
  if (alg2 >= 5)
  {
    newN2 = ((int2 - alg2) + 10) / 1000.00;
  }
  else
  {
    newN2 = (int2 - alg2) / 1000.00;
  }
  if (alg3 >= 5)
  {
    newN3 = ((int3 - alg3) + 10) / 10000.00;
  }
  else
  {
    newN3 = (int3 - alg3) / 10000.00;
  }
  printf("%f\n", newN1);
  printf("%f\n", newN2);
  printf("%f\n", newN3);
  return 0;
}