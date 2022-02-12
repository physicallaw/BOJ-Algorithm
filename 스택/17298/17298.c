#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main()
{
   int n, i, cnt = 0;
   int s[MAX], arr[MAX], answer[MAX];
   scanf("%d" , &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);

   for (i = n - 1; i >= 0; --i)
   {
      while (cnt && s[cnt - 1] <= arr[i])
         --cnt;
      answer[i] = cnt ? s[cnt - 1] : -1;
      s[cnt++] = arr[i];
   }
   for (i = 0; i < n; ++i)
      printf("%d ", answer[i]);

   return 0;
}