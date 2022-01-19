#include <stdio.h>
#include <stdlib.h>
#define LENGTH 101

struct member {
   int age;
   char name[LENGTH];
};

int compare (const void * a, const void * b)
{
   if (((struct member*)a)->age == ((struct member*)b)->age)
		return -1;
   return ((struct member*)a)->age - ((struct member*)b)->age;
}

int main()
{
   int n, i;
   struct member* arr;
   scanf("%d", &n);
   arr = (struct member*)malloc(n * sizeof(struct member));
   for (i = 0; i < n; ++i)
      scanf("%d %s", &arr[i].age, arr[i].name);
   
   qsort(arr, n, sizeof(struct member), compare);
   for (i = 0; i < n; ++i)
      printf("%d %s\n", arr[i].age, arr[i].name);

   return 0;
}