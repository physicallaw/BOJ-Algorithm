#include <stdio.h>
#define MAX 10001

int main()
{
   int n, i, j;
   int arr[MAX] = {0};
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d", &j);
      ++arr[j];
   }

   for (i = 0; i < MAX; ++i)
      for (j = 0; j < arr[i]; ++j)
         printf("%d\n", i);   

   return 0;
}