#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t, n, k;
   cin>>t;
   vector<vector<int>> v(31);
   for (int i = 0; i <= 30; ++i)
   {
      v[i] = vector<int> (i + 1, 1);
      for (int j = 1; j < i; ++j)
         v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
   }

   for (int i = 0; i < t; ++i)
   {
      cin>>k>>n;
      cout<<v[n][k]<<"\n";
   }

   return 0;
}