#include <iostream>
#include <vector>

using namespace std;

int getparent(vector<int> &v, int n)
{
   if (v[n] == n)
      return n;
   return v[n] = getparent(v, v[n]);
}

int main()
{
   int n, m, t, x, y;
   cin >> n >> m;
   vector<int> v(n + 1);
   for (int i = 0; i < n + 1; ++i)
      v[i] = i;
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
      {
         cin >> t;
         if (t == 1)
         {
            x = getparent(v, i + 1), y = getparent(v, j + 1);
            v[y] = x;
         }
      }
   vector<int> path(m);
   for (int i = 0; i < m; ++i)
      cin >> path[i];
   for (int i = 0; i < m - 1; ++i)
   {
      if (getparent(v, path[i]) != getparent(v, path[i + 1]))
      {
         cout << "NO";
         break;
      }
      if (i == m - 2)
         cout << "YES";
   }

   return 0;
}