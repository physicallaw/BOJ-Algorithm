#include <stdio.h>
#include <string.h>

int main()
{
   int arr[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
   int temp[10];
   int n, i, answer;
   scanf("%d", &n);
   for (int i = 1; i < n; ++i)
   {
      temp[0] = arr[1] % 1000000000;
      temp[1] = (arr[0] + arr[2]) % 1000000000;
      temp[2] = (arr[1] + arr[3]) % 1000000000;
      temp[3] = (arr[2] + arr[4]) % 1000000000;
      temp[4] = (arr[3] + arr[5]) % 1000000000;
      temp[5] = (arr[4] + arr[6]) % 1000000000;
      temp[6] = (arr[5] + arr[7]) % 1000000000;
      temp[7] = (arr[6] + arr[8]) % 1000000000;
      temp[8] = (arr[7] + arr[9]) % 1000000000;
      temp[9] = arr[8] % 1000000000;
      memcpy(arr, temp, 10 * sizeof(int));
   }

   answer = 0;
   for (i = 0; i < 10; ++i)
      answer = (answer + arr[i]) % 1000000000;
   printf("%d", answer);

   return 0;
}