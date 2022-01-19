#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int compare (const void * a, const void * b)
{
   if (((int*)a)[1] == ((int*)b)[1])
		return ((int*)a)[0] - ((int*)b)[0];
	else
		return ((int*)a)[1] - ((int*)b)[1];
}

int main()
{
   int n, i;
   int arr[MAX][2];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d %d", arr[i], arr[i] + 1);
   
   qsort(arr, n, sizeof(int) * 2, compare);
   for (i = 0; i < n; ++i)
      printf("%d %d\n", arr[i][0], arr[i][1]);

   return 0;
}