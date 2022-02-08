#include <stdio.h>

int gcd(int, int);
int lcm(int, int);

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%d\n%d", gcd(a, b), lcm(a, b));

   return 0;
}

int gcd(int a, int b)
{
   if (a < b) return gcd(b, a);
   if (a == b) return a;
   return gcd(a - b, b);
}
int lcm(int a, int b)
{
   int n = a;
   while (n % b)
      n += a;
   return n;
}