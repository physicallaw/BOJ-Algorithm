#include <stdio.h>
#define min(a, b) (a < b ? a : b)

int main()
{
   int n, a, b, c, t1, t2, t3, i;
   int answer[3] = {0};
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%d %d %d", &a, &b, &c);
      t1 = a + min(answer[1], answer[2]);
      t2 = b + min(answer[0], answer[2]);
      t3 = c + min(answer[0], answer[1]);
      answer[0] = t1;
      answer[1] = t2;
      answer[2] = t3;
   }
   printf("%d", min(min(answer[0], answer[1]), answer[2]));

   return 0;
}