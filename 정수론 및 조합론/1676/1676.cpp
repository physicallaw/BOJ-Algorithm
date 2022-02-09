#include <iostream>
using namespace std;

int main()
{
   int n, answer = 0;
   cin>>n;
   for (int i = 5; i <= n; i += 5)
   {
      int t = i;
      while (t and t % 5 == 0)
      {
         ++answer;
         t /= 5;
      }
   }
   cout<<answer;

   return 0;
}