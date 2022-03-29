#include <iostream>
#include <vector>

using namespace std;

int getParent(vector<int> &v, int n)
{
   if (v[n] == n)
      return n;
   return v[n] = getParent(v, v[n]);
}

int main()
{
   int n, m, a, b, answer = 1;
   bool check = false;
   cin >> n >> m;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      v[i] = i;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      if (getParent(v, a) == getParent(v, b))
      {
         check = true;
         break;
      }
      v[v[b]] = v[a];
      ++answer;
   }

   if (check)
      cout << answer;
   else
      cout << 0;

   return 0;
}