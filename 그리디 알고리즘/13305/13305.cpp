#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   long long a, b = 1000000000, answer = 0;
   cin>>n;
   vector<long long> v(n - 1);
   for (int i = 0; i < n - 1; ++i)
      cin>>v[i];
   for (int i = 0; i < n - 1; ++i)
   {
      cin>>a;
      b = a < b ? a : b;
      answer += b * v[i];
   }
   cout<<answer;

   return 0;
}