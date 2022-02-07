#include <stdio.h>
#define MAX 100000

int main()
{
   int n, i;
   long long a, b = 1000000000, answer = 0;
   long long arr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n - 1; ++i)
      scanf("%lld", arr + i);
   for (i = 0; i < n - 1; ++i)
   {
      scanf("%lld", &a);
      b = a < b ? a : b;
      answer += b * arr[i];
   }
   printf("%lld", answer);

   return 0;
}