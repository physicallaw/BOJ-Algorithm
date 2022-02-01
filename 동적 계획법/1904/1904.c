#include <stdio.h>

int main()
{
   int n, a, b, i, t;
   scanf("%d", &n);
   a = 1, b = 1;

   for (i = 1; i < n; ++i)
   {
      t = a;
      a = b;
      b = (b + t) % 15746;
   }

   printf("%d", b);

   return 0;
}