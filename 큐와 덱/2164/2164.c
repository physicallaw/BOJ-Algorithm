#include <stdio.h>
#include <math.h>
#define MAX 20

int main()
{
   int n, i, j, answer = 0;
   int arr[MAX] = {0};
   scanf("%d", &n);
   for (i = 0; n > 1; ++i)
   {
      arr[i] =  n % 2;
      n /= 2;
   }
   for (j = 0; j < MAX; ++j)
      if (arr[j]) answer += (int) pow(2, j + 1);
   printf("%d", (answer ? answer : (int) pow(2, i)));

   return 0;
}