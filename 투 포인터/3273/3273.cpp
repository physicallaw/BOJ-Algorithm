#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, x, l, r, answer = 0;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   cin >> x;

   sort(v.begin(), v.end());
   l = 0, r = n - 1;
   while (l < r)
   {
      if (v[l] + v[r] == x)
         ++answer;
      if (v[l] + v[r] <= x)
         ++l;
      else
         --r;
   }
   cout << answer;

   return 0;
}