#include <stdio.h>
#define MAX 1001

int main()
{
   int n, i, j, t;
   int answer = 0;
   _Bool prime[MAX] = {1, 1, 0};
   for (i = 2; i < MAX; ++i)
      for (j = i * 2; j < MAX; j += i)
         prime[j] = 1;

   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d", &t);
      if (!prime[t])
         ++answer;
   }
   printf("%d", answer);

   return 0;
}