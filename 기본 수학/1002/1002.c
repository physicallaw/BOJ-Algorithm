#include <stdio.h>
#define dist(x1, y1, x2, y2) (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)

int main()
{
   int n, i, x1, y1, r1, x2, y2, r2, d, answer;
   scanf("%d", &n);
   
   for (i = 0; i < n; ++i)
   {
      scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
      d = dist(x1, y1, x2, y2);
      if (x1 == x2 && y1 == y2 && r1 == r2)
         answer = -1;
      else if (d == (r1 + r2) * (r1 + r2) || d == (r1 - r2) * (r1 - r2))
         answer = 1;
      else if ((r1 - r2) * (r1 - r2) < d && d < (r1 + r2) * (r1 + r2))
         answer = 2;
      else
         answer = 0;
      printf("%d\n", answer);
   }

   return 0;
}