#include <stdio.h>
#include <math.h>

int decompose(int);

int main()
{
   int n;
   scanf("%d", &n);
   printf("%d", decompose(n));

   return 0;
}

int decompose(int n)
{
   int i, j, temp;
   int d = floor(log10(n) + 1);
   for (i = n - d * 10; i < n; ++i)
   {
      temp = i;
      for (j = i; j > 0; j /= 10)
         temp += j % 10;
      if (n == temp)
         return i;
   }
   return 0;
}