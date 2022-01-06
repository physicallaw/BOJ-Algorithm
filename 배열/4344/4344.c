#include <stdio.h>
#define MAX 1000

int main()
{
   int c, n, i, j;
   float avg, ans;
   int score[MAX];

   scanf("%d", &c);
   for (i = 0; i < c; ++i)
   {
      avg = 0.f, ans = 0.f;
      scanf("%d", &n);
      for (j = 0; j < n; ++j)
      {
         scanf("%d", score + j);
         avg += score[j];
      }
      avg /= n;

      for (j = 0; j < n; ++j)
         if (score[j] > avg)
            ans += 1.f;
      ans = ans / n * 100;

      printf("%.3f%%\n", ans);
   }

   return 0;
}