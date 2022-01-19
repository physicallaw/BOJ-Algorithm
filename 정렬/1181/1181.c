#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20000
#define LENGTH 51

int compare (const void * a, const void * b)
{
   if (strlen(a) == strlen(b))
		return strcmp(a, b);
   return strlen(a) - strlen(b);
}

int main()
{
   int n, i;
   char arr[MAX][LENGTH];
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%s", arr[i]);
   
   qsort(arr, n, sizeof(char) * LENGTH, compare);
   printf("%s\n", arr[0]);
   for (i = 1; i < n; ++i)
      if (strcmp(arr[i - 1], arr[i]))
         printf("%s\n", arr[i]);

   return 0;
}