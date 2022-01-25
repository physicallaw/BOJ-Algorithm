#include <stdio.h>
#define MAX 15

int find(int, int);
int nqueen(int);
int arr[MAX];
int l;

int main()
{
   scanf("%d", &l);
   printf("%d", nqueen(0));

   return 0;
}

int find(int n, int val)
{
   int i = 0;
   for (i = 0; i < n; ++i)
   {
      if (arr[i] == val)
         return i;
      if (arr[i] - i == val - n)
         return i;
      if (arr[i] + i == val + n)
         return i;
   }
   return -1;
}

int nqueen(int n)
{
   int i, answer;
   if (l == n)
      return 1;
   answer = 0;
   for (i = 0; i < l; ++i)
   {
      if (find(n, i) != -1)
         continue;
      arr[n] = i;
      answer += nqueen(n + 1);
   }
   return answer;
}