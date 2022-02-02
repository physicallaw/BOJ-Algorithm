#include <stdio.h>

int main()
{
   int i, n, t;
   long arr[101] = {0, 1, 1, 1, 2};
   for (i = 5; i < 101; ++i)
      arr[i] = arr[i - 1] + arr[i - 5];
   
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d", &t);
      printf("%ld\n", arr[t]);
   }

   return 0;
}