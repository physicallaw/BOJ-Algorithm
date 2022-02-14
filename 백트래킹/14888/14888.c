#include <stdio.h>
#define MAX 11

int next_permutation(int *, int *);
void reverse(int *, int *);
void swap(int *, int *);

int main()
{
   int n, m, i, j, k, temp;
   int min = 999999999, max = -999999999;
   int arr[MAX], op[MAX], result;
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", arr + i);
   for (i = 0, k = 0; i < 4; ++i)
   {
      scanf("%d", &m);
      for (j = 0; j < m; ++j)
         op[j + k] = i;
      k += j;
   }

   do
   {
      temp = arr[0];
      for (i = 1; i < n; ++i)
      {
         if (op[i - 1] == 0)
            temp += arr[i];
         else if (op[i - 1] == 1)
            temp -= arr[i];
         else if (op[i - 1] == 2)
            temp *= arr[i];
         else
            temp /= arr[i];
      }
      if (temp > max)
         max = temp;
      if (temp < min)
         min = temp;
   } while (next_permutation(op, op + n - 1));
   printf("%d\n%d", max, min);

   return 0;
}

int next_permutation(int *first, int *last)
{
   if (first == last)
      return 0;
   int *i = last;
   if (first == --i)
      return 0;

   while (1)
   {
      int *i1, *i2;

      i1 = i;
      if (*--i < *i1)
      {
         i2 = last;
         while (!(*i < *--i2))
            ;
         swap(i, i2);
         reverse(i1, last);
         return 1;
      }
      if (i == first)
      {
         reverse(first, last);
         return 0;
      }
   }
}

void reverse(int *first, int *last)
{
   while (first < last)
      swap(first++, --last);
}

void swap(int *a, int *b)
{
   int t = *b;
   *b = *a;
   *a = t;
}