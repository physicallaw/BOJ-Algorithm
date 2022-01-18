#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10

int compare (const void * a, const void * b)
{
   return *(char*)b - *(char*)a;
}

int main()
{
   int i;
   char arr[MAX];
   scanf("%s", arr);
   
   qsort(arr, strlen(arr), sizeof(char), compare);
   printf("%s", arr);

   return 0;
}