#include <stdio.h>
#define MAX 41

int main()
{
   int n, t, i;
   int fibonacci[MAX][2] = {{1, 0}, {0, 1}};
   scanf("%d", &n);

   for (i = 2; i < MAX; ++i)
   {
      fibonacci[i][0] = fibonacci[i - 2][0] + fibonacci[i - 1][0];
      fibonacci[i][1] = fibonacci[i - 2][1] + fibonacci[i - 1][1];
   }

   for (i = 0; i < n; ++i)
   {
      scanf("%d", &t);
      printf("%d %d\n", fibonacci[t][0], fibonacci[t][1]);
   }

   return 0;
}