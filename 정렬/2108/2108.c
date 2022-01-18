#include <stdio.h>
#include <stdlib.h>
#define MAX 500000
#define RANGE 8001

int compare (const void * a, const void * b)
{
   return *(int*)a - *(int*)b;
}

int main()
{
   int n, i;
   int sum = 0, m = 0, answer1 = 0, answer2 = 0;
   int arr[MAX];
   int cnt[RANGE] = {0};
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d", arr + i);
      sum += arr[i];
      ++cnt[arr[i]+ RANGE / 2];
   }
   
   qsort(arr, n, sizeof(int), compare);
   for (i = 0; i < RANGE; ++i)
   {
      if (m == cnt[i] && answer1 == answer2)
         answer2 = i - RANGE / 2;
      else if (m < cnt[i])
         m = cnt[i], answer1 = i - RANGE / 2, answer2 = i - RANGE / 2;
   }
   
   printf("%.0f\n", (double) sum / n);
   printf("%d\n", arr[n / 2]);
   printf("%d\n", answer2);
   printf("%d\n", arr[n - 1] - arr[0]);

   return 0;
}