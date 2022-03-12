#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main()
{
   int n, m, a, b;
   cin >> n >> m;
   vector<vector<int>> path(n);
   vector<int> check(n);
   for (int i = 0; i < n; ++i)
      check[i] = i;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      path[--a].push_back(--b);
      path[b].push_back(a);
   }
   queue<int> q;
   for (int i = 0; i < n; ++i)
   {
      if (check[i] != i)
         continue;
      q.push(i);
      while (!q.empty())
      {
         for (int j = 0; j < path[q.front()].size(); ++j)
         {
            if (check[path[q.front()][j]] == path[q.front()][j])
            {
               check[path[q.front()][j]] = check[q.front()];
               q.push(path[q.front()][j]);
            }
         }
         q.pop();
      }
   }
   map<int, int> l;
   for (int i = 0; i < n; ++i)
      l[check[i]] = 1;
   cout << l.size();

   return 0;
}