#include <stdio.h>

int main()
{
   int n, t, i, answer = 0;
   scanf("%d", &n);
   for (i = 5; i <= n; i += 5)
   {
      t = i;
      while (t && t % 5 == 0)
      {
         ++answer;
         t /= 5;
      }
   }
   printf("%d", answer);

   return 0;
}