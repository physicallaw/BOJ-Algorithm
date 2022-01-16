#include <stdio.h>
#define MAX 200

int main()
{
   int n, i, j, answer;
   int arr[MAX][2];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d %d", arr[i], arr[i] + 1);
   
   for (i = 0; i < n; ++i)
   {
      answer = 1;
      for (j = 0; j < n; ++j)
         if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            ++answer;
      printf("%d\n", answer);
   }

   return 0;
}