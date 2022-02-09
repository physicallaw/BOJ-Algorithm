#include <stdio.h>
#define MAX 100

int gcd(int, int);

int main()
{
   int n, i, t;
   int arr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);

   for (i = 1; i < n; ++i)
   {
      t = gcd(arr[0], arr[i]);
      printf("%d/%d\n", arr[0] / t, arr[i] / t);
   }

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}