#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   cin.tie(NULL);
   ios::sync_with_stdio(false);
   
   int n, m, t;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   sort(v.begin(), v.end());

   cin >> m;
   for (int i = 0; i < m; ++i)
   {
      cin >> t;
      cout << upper_bound(v.begin(), v.end(), t) - lower_bound(v.begin(), v.end(), t) << "\n";
   }

   return 0;
}