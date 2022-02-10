#include <stdio.h>
#define MAX 100000

int main()
{
   int n, t, i, cnt = 0, answer = 0;
   int s[MAX];
   scanf("%d" , &n);

   for (i = 0; i < n; ++i)
   {
      scanf("%d", &t);
      answer += t;
      if (t)
         s[cnt++] = t;
      else
         answer -= s[--cnt];
   }
   printf("%d", answer);

   return 0;
}