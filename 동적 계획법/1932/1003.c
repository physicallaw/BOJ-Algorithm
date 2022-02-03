#include <stdio.h>
#define MAX 500
#define max(a, b) (a > b ? a : b)

int main()
{
   int arr[MAX][MAX];
   int n, i, j, answer;
   scanf("%d", &n);

   for (i = 0; i < n; ++i)
      for (j = 0; j < i + 1; ++j)
         scanf("%d", &arr[i][j]);
   for (i = 1; i < n; ++i)
      for (j = 0; j < i + 1; ++j)
         if (j == 0)
            arr[i][j] += arr[i - 1][j];
         else if (j == i)
            arr[i][j] += arr[i - 1][j - 1];
         else
            arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
   
   answer = 0;
   for (i = 0; i < n; ++i)
      answer = max(arr[n - 1][i], answer);
   printf("%d", answer);

   return 0;
}