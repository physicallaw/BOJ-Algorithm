#include <stdio.h>
#define MAX 302
#define max(a, b) (a > b ? a : b)

int main()
{
   int arr[MAX] = {0}, answer[MAX] = {0};
   int n, i;
   scanf("%d", &n);
   for (i = 2; i < n + 2; ++i)
      scanf("%d", arr + i);

   answer[2] = arr[2];
   for (i = 3; i < n + 2; ++i)
      answer[i] = arr[i] + max(answer[i - 3] + arr[i - 1], answer[i - 2]);
   printf("%d", answer[n + 1]);

   return 0;
}