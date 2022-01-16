#include <stdio.h>
#define MIN(a, b) (a < b ? a : b)
#define MAX 50

int main()
{
   int n, m, i, j, k, l, answer1, answer2;
   int answer = 999999999;
   char temp[MAX];
   int arr[MAX][MAX];
   scanf("%d %d", &n, &m);
   for (i = 0; i < n; ++i)
   {
      scanf("%s", temp);
      for(j = 0; j < m; ++j)
      {
         if (temp[j] == 'B')
            arr[i][j] = 0;
         else
            arr[i][j] = 1;
      }
   }
   
   for (i = 0; i < n - 7; ++i)
      for (j = 0; j < m - 7; ++j)
      {
         answer1 = 0, answer2 = 0;
         for (k = i; k < i + 8; ++k)
            for (l = j; l < j + 8; ++l)
            {
               answer1 += arr[k][l] ^ ((k + l) % 2);
               answer2 += arr[k][l] ^ ((k + l + 1) % 2);
            }
         answer = MIN(MIN(answer1, answer2), answer);
      }
   printf("%d", answer);

   return 0;
}