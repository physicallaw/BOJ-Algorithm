#include <stdio.h>
#include <math.h>
#define MAX 1001

int main()
{
   int n, k, i, j;
   int arr[MAX][MAX];
   scanf("%d %d", &n, &k);
   for (i = 0; i <= n; ++i)
   {
      arr[i][0] = 1, arr[i][i] = 1;
      for (j = 1; j < i; ++j)
         arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
   }
   printf("%d", arr[n][k]);

   return 0;
}
