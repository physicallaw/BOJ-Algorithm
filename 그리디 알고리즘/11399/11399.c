#include <stdio.h>
#define MAX 1000

int comp (const void * a, const void * b)
{
   return *(int*)b - *(int*)a;
}

int main()
{
   int n, i, answer = 0;
   int arr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);
   qsort(arr, n, sizeof(int), comp);

   for (i = 0; i < n; ++i)
      answer += arr[i] * (i + 1);
   printf("%d", answer);

   return 0;
}