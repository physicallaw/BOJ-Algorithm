#include <stdio.h>
#include <math.h>

void hanoi(int, int, int);

int main()
{
   int n;
   scanf("%d", &n);
   printf("%d\n", (int) pow(2, n) - 1);
   hanoi(n, 0, 2);

   return 0;
}

void hanoi(int n, int a, int b)
{
   if (n == 1)
   {
      printf("%d %d\n", a + 1, b + 1);
      return;
   }
   hanoi(n - 1, a, 3 - a - b);
   hanoi(1, a, b);
   hanoi(n - 1, 3 - a - b, b);
}