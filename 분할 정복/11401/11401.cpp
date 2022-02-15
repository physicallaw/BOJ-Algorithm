#include <iostream>
#define MOD 1000000007L
using namespace std;

long factorial(long);
long pow(long);

int main()
{
   long n, k;
   cin>>n>>k;
   cout<<factorial(n) * pow(factorial(n - k) * factorial(k) % MOD) % MOD;

   return 0;
}

long factorial(long n)
{
   long result = 1L;
   for (long i = 0L; i < n; ++i)
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