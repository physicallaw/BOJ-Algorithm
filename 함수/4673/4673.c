#include <stdio.h>
#define MAX 10001

int self_num(int n)
{
   int answer = n;
   while (n > 0)
   {
      answer += n % 10;
      n /= 10;
   }

   return answer;
}

int main()
{
   _Bool check[MAX] = {0, };
   int i, n;

   for (i = 1; i < MAX; ++i)
   {
      n = self_num(i);
      if (n < MAX)
         check[n] = 1;
   }

   for (i = 1; i < MAX; ++i)
      if (!check[i])
         printf("%d\n", i);

   return 0;
}