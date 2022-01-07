#include <stdio.h>
#define MAX 101

int main()
{
   char s[MAX];
   int i, answer = 0;
   scanf("%s", s);

   for (i = 0; s[i] != '\0'; ++i)
   {
      ++answer;
      if (s[i] == 'c' && s[i+1] == '=')
         ++i;
      else if (s[i] == 'c' && s[i+1] == '-')
         ++i;
      else if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=')
         i += 2;
      else if (s[i] == 'd' && s[i+1] == '-')
         ++i;
      else if (s[i] == 'l' && s[i+1] == 'j')
         ++i;
      else if (s[i] == 'n' && s[i+1] == 'j')
         ++i;
      else if (s[i] == 's' && s[i+1] == '=')
         ++i;
      else if (s[i] == 'z' && s[i+1] == '=')
         ++i;
   }
   printf("%d", answer);

   return 0;
}