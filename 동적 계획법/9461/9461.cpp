#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<long> v(101, 0);
   v[1] = 1, v[2] = 1, v[3] = 1, v[4] = 2;
   for (int i = 5; i < 101; ++i)
      v[i] = v[i - 1] + v[i - 5];

   int n, t;
   cin>>n;
   for (int i = 0; i < n; ++i)
   {
      cin>>t;
      cout<<v[t]<<"\n";
   }

   return 0;
}