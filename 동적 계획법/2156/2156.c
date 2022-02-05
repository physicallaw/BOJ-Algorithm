#include <stdio.h>
#define MAX 10003
#define max(a, b) (a > b ? a : b)

int main()
{
   int arr[MAX] = {0}, answer[MAX] = {0};
   int n, i;
   scanf("%d", &n);
   for (i = 3; i < n + 3; ++i)
      scanf("%d", arr + i);

   for (i = 3; i < n + 3; ++i)
      answer[i] = max(answer[i - 1] ,arr[i] + max(answer[i - 3] + arr[i - 1], answer[i - 2]));
   printf("%d", answer[n + 2]);

   return 0;
}