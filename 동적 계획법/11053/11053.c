#include <stdio.h>
#define MAX 1001

int main()
{
   int arr[MAX] = {0}, answer[MAX] = {0};
   int n, i, it, l;
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);

   answer[0] = arr[0];
   l = 1;
   for (i = 1; i < n; ++i)
   {
      for (it = 0; answer[it] != 0 && arr[i] > answer[it]; ++it);
      if (it == l)
         answer[l++] = arr[i];
      else
         answer[it] = arr[i]; 
   }
   printf("%d", l);

   return 0;
}