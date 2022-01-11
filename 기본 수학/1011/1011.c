#include <stdio.h>

unsigned int fly(unsigned int, unsigned int);

int main()
{
   unsigned int n, a, b, i;
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d %d", &a, &b);
      printf("%d\n", fly(a, b));
   }

   return 0;
}

unsigned int fly(unsigned int a, unsigned int b)
{
   unsigned int n = b - a;
   unsigned int i, check = 0;

   for (i = 0; check < n; check += (i + 1) / 2)
      ++i;

   return i;
}