#include <stdio.h>
#define MAX 300000

void sort(int *, int *);

int main()
{
   int n, m, i;
   int arr[MAX];
   scanf("%d %d", &n, &m);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);

   sort(arr, arr + n);

   for (i = 0; i < n - 2; ++i)
      if (arr[i] + arr[i + 1] + arr[i + 2] > m)
      {
         --i;
         break;
      }
   printf("%d", arr[i] + arr[i + 1] + arr[i + 2]);

   return 0;
}

void sort(int *begin, int *end)
{
   int *it;
   int i, temp;
   for (it = begin + 1; it != end; ++it)
   {
      i = it - begin;
      while (i > 0 && *(begin + i - 1) > *(begin + i))
      {
         temp = *(begin + i);
         *(begin + i) = *(begin + i - 1);
         *(begin + i - 1) = temp;
         --i;
      }
   }
}