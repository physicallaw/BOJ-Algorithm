#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, m, l, a, b, c;
   cin >> n >> m >> l;
   vector<vector<vector<int>>> path(n);
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b >> c;
      path[a - 1].push_back({b - 1, c});
   }
   vector<int> cost(n, 999999999), check(n, 1);
   cost[l - 1] = 0;
   queue<int> q;
   q.push(l - 1);
   while (!q.empty())
   {
      int p = q.front();
      check[p] = 0;
      for (int j = 0; j < path[p].size(); ++j)
         if (cost[path[p][j][0]] > cost[p] + path[p][j][1])
            cost[path[p][j][0]] = cost[p] + path[p][j][1];
      int k, min = 999999999;
      for (int j = 0; j < n; ++j)
         if (check[j] and cost[j] < min)
            k = j, min = cost[j];
      if (min != 999999999)
         q.push(k);
      q.pop();
   }
   for (int i = 0; i < n; ++i)
      if (cost[i] == 999999999)
         cout << "INF\n";
      else
         cout << cost[i] << "\n";

   return 0;
}