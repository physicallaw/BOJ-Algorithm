#include <stdio.h>

int main()
{
   int n, i, min, max;
   scanf("%d", &n);
   int arr[n];
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);

   min = 1000000;
   max = -1000000;

   for (i = 0; i < n; ++i)
   {
      min = arr[i] < min ? arr[i] : min;
      max = arr[i] > max ? arr[i] : max;
   }
   printf("%d %d", min, max);

   return 0;
}