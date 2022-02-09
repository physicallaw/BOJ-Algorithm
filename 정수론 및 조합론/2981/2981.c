#include <stdio.h>
#include <math.h>
#define MAX 500

int gcd(int, int);

int main()
{
   int n, m = 0, i, j;
   int arr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);
   
   for (i = 0; i < n; ++i)
      for (j = i + 1; j < n; ++j)
         m = gcd(abs(arr[i] - arr[j]), m);

   for (i = 2; i * i < m; ++i)
      if (m % i == 0)
         printf("%d ", i);
   for (i = sqrt(m); i > 0; --i)
      if (m % i == 0)
         printf("%d ", m / i);

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}