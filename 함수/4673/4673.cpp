#include <iostream>
#define MAX 10001
using namespace std;

int self_num(int n)
{
   int answer = n;
   while (n > 0)
   {
      answer += n % 10;
      n /= 10;
   }

   return answer;
}

int main()
{
   bool check[MAX] = {false, };
   int n;

   for (int i = 1; i < MAX; ++i)
   {
      n = self_num(i);
      if (n < MAX)
         check[n] = true;
   }

   for (int i = 1; i < MAX; ++i)
      if (!check[i])
         cout<<i<<"\n";

   return 0;
}