#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[50];
   int i, answer, check = 1;
   scanf("%s", s);
   answer = atoi(s);
   while (s[i] != '\0')
   {
      if (s[i] == '-') check = -1;
      if (!isdigit(s[i++]))
         answer += check * atoi(s + i);
   }
   printf("%d", answer);

   return 0;
}