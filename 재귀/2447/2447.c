#include <stdio.h>

void star(int, int, int);

int main()
{
   int n, i, j;
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
   {
      for (j = 0; j < n; ++j)
         star(i, j, n);
      printf("\n");
   }

   return 0;
}

void star(int i, int j, int n)
{
   if((i / n) % 3 == 1 && (j / n) % 3 == 1)
      printf(" ");
   else if(n / 3 == 0)
      printf("*");
   else
      star(i, j, n/3);
}