#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, l, r, a, b;
   int m = 2000000000;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];

   sort(v.begin(), v.end());
   l = 0, r = n - 1;
   while (l < r)
   {
      if (m > abs(v[l] + v[r]))
      {
         a = v[l], b = v[r];
         m = abs(v[l] + v[r]);
      }
      if (v[l] + v[r] < 0)
         ++l;
      else if (v[l] + v[r] > 0)
         --r;
      else
         break;
   }
   cout << a << " " << b;

   return 0;
}