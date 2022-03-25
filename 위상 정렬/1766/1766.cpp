#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, m, a, b;
   cin >> n >> m;
   vector<vector<int>> v(n + 1);
   vector<int> check(n + 1, 0);
   priority_queue<int> q;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      v[a].push_back(b);
      ++check[b];
   }
   for (int i = 1; i < n + 1; ++i)
      if (check[i] == 0)
         q.push(-i);
   while (!q.empty())
   {
      int x = -q.top();
      q.pop();
      for (int i = 0; i < v[x].size(); ++i)
      {
         --check[v[x][i]];
         if (check[v[x][i]] == 0)
            q.push(-v[x][i]);
      }
      cout << x << " ";
   }
   return 0;
}