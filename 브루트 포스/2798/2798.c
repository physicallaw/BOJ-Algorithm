#include <stdio.h>
#define MAX 300000

int main()
{
   int n, m, i, j, k, temp;
   int answer = 0;
   int arr[MAX];
   scanf("%d %d", &n, &m);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);

   for (i = 0; i < n - 2; ++i)
      for (j = i + 1; j < n - 1; ++j)
         for (k = j + 1; k < n; ++k)
         {
            temp = arr[i] + arr[j] + arr[k];
            if (answer < temp && temp <= m)
               answer = temp;
         }

   printf("%d", answer);

   return 0;
}