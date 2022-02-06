#include <stdio.h>
#define MAX 10

int main()
{
   int n, price, i, answer = 0;
   int coin[MAX];
   scanf("%d %d", &n, &price);

   for (i = 0; i < n; ++i)
      scanf("%d", coin + i);

   for (i = n - 1; i > -1; --i)
   {
      answer += price / coin[i];
      price %= coin[i];
   }

   printf("%d", answer);

   return 0;
}