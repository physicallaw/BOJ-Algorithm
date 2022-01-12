#include <iostream>
#define MAX 1001
using namespace std;

int main()
{
   int n, t;
   int answer = 0;
   bool prime[MAX] = {1, 1, 0};
   for (int i = 2; i < MAX; ++i)
      for (int j = i * 2; j < MAX; j += i)
         prime[j] = 1;

   cin>>n;
   for (int i = 0; i < n; ++i)
   {
      cin>>t;
      if (!prime[t])
         ++answer;
   }
   cout<<answer;

   return 0;
}