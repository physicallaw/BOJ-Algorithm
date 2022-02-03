#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<vector<int>> v(n, vector<int> (n, 0));
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < i + 1; ++j)
         cin>>v[i][j];
   for (int i = 1; i < n; ++i)
      for (int j = 0; j < i + 1; ++j)
         if (j == 0)
            v[i][j] += v[i - 1][j];
         else if (j == i)
            v[i][j] += v[i - 1][j - 1];
         else
            v[i][j] += max(v[i - 1][j - 1], v[i - 1][j]);

   cout<<*max_element(v.rbegin()->begin(), v.rbegin()->end());

   return 0;
}