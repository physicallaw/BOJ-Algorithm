#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

int compare (const void * a, const void * b)
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
   
   qsort(arr, n, sizeof(int), compare);
   for (i = 0; i < n; ++i)
      printf("%d\n", arr[i]);

   return 0;
}