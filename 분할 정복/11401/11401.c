#include <stdio.h>
#define MOD 1000000007L

long factorial(long);
long pow(long);

int main()
{
   long n, k;
   scanf("%d %d", &n, &k);
   printf("%ld", factorial(n) * pow(factorial(n - k) * factorial(k) % MOD) % MOD);

   return 0;
}

long factorial(long n)
{
   long i, result = 1L;
   for (i = 0L; i < n; ++i)
      result = result * (i + 1) % MOD;
   return result;
}

long pow(long n)
{
   long result = 1L;
   int bin = MOD - 2;
   while (bin > 0)
   {
      if (bin % 2)
         result = result * n % MOD;
      n = n * n % MOD;
      bin /= 2;
   }
   return result;
}