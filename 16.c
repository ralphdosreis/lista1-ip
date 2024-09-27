#include <stdio.h>

int main()
{
  int n, cifra;
  scanf("%i", &n);
  if (n == 0 || n % 10 == 0)
  {
  }
  else if (n > 0)
  {
    do
    {
      cifra = n % 10;
      printf("%i", cifra);
      n /= 10;
    } while (n != 0);
    printf("\n");
  }
  else
  {
    n *= -1;
    printf("-");
    do
    {
      cifra = n % 10;
      printf("%i", cifra);
      n /= 10;
    } while (n != 0);
    printf("\n");
  }
  return 0;
}