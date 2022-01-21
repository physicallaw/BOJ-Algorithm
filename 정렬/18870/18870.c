#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000

int compare (const void * a, const void * b)
{
   return *(int*)a - *(int*)b;
}

int main()
{
   int n, i, j;
   int arr1[MAX], arr2[MAX], sarr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d", arr1 + i);
      arr2[i] = arr1[i];
   }
   
   qsort(arr2, n, sizeof(int), compare);
   sarr[0] = arr2[0];
   for (i = 1, j = 1; i < n; ++i)
      if (arr2[i - 1] != arr2[i])
      {
         sarr[j] = arr2[i];
         ++j;
      }
   for (i = 0; i < n; ++i)
      printf("%ld ", (int*) bsearch(arr1 + i, sarr, j, sizeof(int), compare) - sarr);

   return 0;
}