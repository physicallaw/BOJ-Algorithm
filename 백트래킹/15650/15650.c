#include <stdio.h>
#define MAX 9

void nandm(int*, int, int);
int find(int*, int, int);

int main()
{
   int n, m;
   int arr[MAX] = {0};
   scanf("%d %d", &n, &m);
   nandm(arr, n, m);

   return 0;
}

int find(int* arr, int n, int val)
{
   int i;
   for (i = 0; i < n; ++i)
      if (arr[i] == val)
         return i;
   return -1;
}

void nandm(int* arr, int n, int m)
{
   int i, j;
   int temp[MAX];
   if (m == 0)
   {
      for (i = 0; arr[i] != 0; ++i)
         printf("%d ", arr[i]);
      printf("\n");
      return;
   }
   for (i = 0; i < n; ++i)
   {
      if (arr[0] != 0 && arr[find(arr, n, 0) - 1] >= i + 1) continue;
      for (j = 0; j < MAX; ++j)
         temp[j] = arr[j];
      for (j = 0; j < n; ++j)
         if (temp[j] == 0)
         {
            temp[j] = i + 1;
            break;
         }
      nandm(temp, n, m - 1);
   }
}