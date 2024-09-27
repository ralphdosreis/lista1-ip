#include <stdio.h>

int main()
{
  int n, res1, res2, res3, res4, res5, res6, res7, res8;
  scanf("%d", &n);
  if (n < 0 || n > 255)
  {
    printf("Numero invalido!");
  }
  else
  {
    res1 = n % 2;
    n /= 2;
    res2 = n % 2;
    n /= 2;
    res3 = n % 2;
    n /= 2;
    res4 = n % 2;
    n /= 2;
    res5 = n % 2;
    n /= 2;
    res6 = n % 2;
    n /= 2;
    res7 = n % 2;
    n /= 2;
    res8 = n % 2;
    printf("%d%d%d%d%d%d%d%d", res8, res7, res6, res5, res4, res3, res2, res1);
  }
  return 0;
}