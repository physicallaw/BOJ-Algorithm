#include <stdio.h>
#define MAX 31

int main()
{
   int t, n, k, i, j;
   int arr[MAX][MAX];
   scanf("%d", &t);
   for (i = 0; i < MAX; ++i)
   {
      arr[i][0] = 1, arr[i][i] = 1;
      for (j = 1; j < i; ++j)
         arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
   }

   for (i = 0; i < t; ++i)
   {
      scanf("%d %d", &k, &n);
      printf("%d\n", arr[n][k]);
   }   

   return 0;
}