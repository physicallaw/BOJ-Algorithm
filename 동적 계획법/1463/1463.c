#include <stdio.h>
#define MAX 1000001

int main()
{
   int arr[MAX] = {0};
   int n, i;
   scanf("%d", &n);
   arr[1] = 0;

   for (i = 1; i < n + 1; ++i)
   {
      if (i * 3 < n + 1 && (arr[i * 3] == 0 || arr[i * 3] > arr[i] + 1))
         arr[i * 3] = arr[i] + 1;
      if (i * 2 < n + 1 && (arr[i * 2] == 0 || arr[i * 2] > arr[i] + 1))
         arr[i * 2] = arr[i] + 1;
      if (i < n && (arr[i + 1] == 0 || arr[i + 1] > arr[i] + 1))
         arr[i + 1] = arr[i] + 1;
   }

   printf("%d", arr[n]);

   return 0;
}