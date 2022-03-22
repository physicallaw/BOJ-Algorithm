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
   vector<int> answer(n, 999999999), check(n, 1);
   answer[l - 1] = 0;
   priority_queue<vector<int>> q;
   q.push({0, l - 1});
   while (!q.empty())
   {
      int x = q.top()[1];
      if (check[x])
      {
         check[x] = 0;
         for (int i = 0; i < path[x].size(); ++i)
            if (answer[path[x][i][0]] > answer[x] + path[x][i][1])
            {
               answer[path[x][i][0]] = answer[x] + path[x][i][1];
               q.push({-answer[path[x][i][0]], path[x][i][0]});
            }
      }
      q.pop();
   }
   for (int i = 0; i < n; ++i)
      if (answer[i] == 999999999)
         cout << "INF\n";
      else
         cout << answer[i] << "\n";

   return 0;
}