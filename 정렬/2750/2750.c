#include <stdio.h>
#define MAX 1000

void sort(int*, int*);

int main()
{
   int n, i;
   int arr[MAX];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);
   
   sort(arr, arr + n);
   for (i = 0; i < n; ++i)
      printf("%d\n", arr[i]);

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