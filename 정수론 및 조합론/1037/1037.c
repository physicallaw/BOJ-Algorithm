#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int comp(const void * a, const void * b)
{
  return *(int*)a - *(int*)b;
}

int main()
{
   int n, i;
   int arr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);
   qsort(arr, n, sizeof(int), comp);
   printf("%d", arr[0] * arr[n-1]);

   return 0;
}