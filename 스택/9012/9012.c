#include <stdio.h>
#include <string.h>
#define MAX 51

int main()
{
   int n, i, j, cnt = 0, answer = 0;
   int s[MAX];
   char t[MAX];
   scanf("%d" , &n);

   for (i = 0; i < n; ++i)
   {
      scanf("%s", t);
      for (j = 0; j < strlen(t); ++j)
      {
         if (cnt == 0 || t[j] == '(')
            s[cnt++] = t[j] - '(';
         else if (!s[cnt - 1])
            --cnt;
         else
            s[cnt++] = 1;
      }
      if (cnt == 0)
         printf("YES\n");
      else
         printf("NO\n");
      cnt = 0;
   }

   return 0;
}