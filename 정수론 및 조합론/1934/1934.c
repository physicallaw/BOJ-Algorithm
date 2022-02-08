#include <stdio.h>

int gcd(int, int);

int main()
{
   int n, a, b, i;
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d %d", &a, &b);
      printf("%d\n", a * b / gcd(a, b));
   }

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}