#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int comp(const void * i, const void * j)
{
   if (*((int*)i + 1) == *((int*)j + 1))
      return *(int*)i - *(int*)j;
   return *((int*)i + 1) - *((int*)j + 1);
}

int main()
{
   int n, i;
   int check = 0, answer = 0;
   int arr[MAX][2];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d %d", arr[i], arr[i] + 1);
   qsort(arr, n, sizeof(int) * 2, comp);

   for (i = 0; i < n; ++i)
      if(check <= arr[i][0])
         ++answer, check = arr[i][1];
   printf("%d", answer);

   return 0;
}