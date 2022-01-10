#include <stdio.h>
#define MAX 101

int main()
{
   int n, i, j, k, l, answer = 0;
   char c[MAX];
   scanf("%n", &n);
   for (i = 0; i < n; ++i)
   {
      scanf("%s", &c);
      for (j = 0; c[j] != '\0'; ++j)
      {
         l = 0;
         for (k = j + 1; c[k] != '\0'; ++k)
         {
            if (c[j] == c[k] && c[k] != c[k-1])
            {
               l = 1;
               break;
            }
         }
         if (l)
         {
            --answer;
            break;
         }
      }
   }
   printf("%d", answer);

   return 0;
}