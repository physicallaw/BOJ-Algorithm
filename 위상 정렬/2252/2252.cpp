#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, m, a, b;
   cin >> n >> m;
   vector<vector<int>> v(n + 1);
   vector<int> check(n+1, 0);
   queue<int> q;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      v[a].push_back(b);
      ++check[b];
   }
   for (int i = 1; i < n + 1; ++i)
      if (check[i] == 0)
         q.push(i);
   while (!q.empty())
   {
      for (int i = 0; i < v[q.front()].size(); ++i)
      {
         --check[v[q.front()][i]];
         if (check[v[q.front()][i]] == 0)
            q.push(v[q.front()][i]);
      }
      cout << q.front() << " ";
      q.pop();
   }
   return 0;
}