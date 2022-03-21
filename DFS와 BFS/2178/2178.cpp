#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   vector<string> v(n);
   vector<vector<int>> answer(n, vector<int>(m, 0));
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   queue<vector<int>> q;
   answer[0][0] = 1;
   q.push({0, 0});
   while (!q.empty())
   {
      int x = q.front()[0], y = q.front()[1];
      if (x > 0 and v[x - 1][y] == '1' and answer[x - 1][y] == 0)
      {
         q.push({x - 1, y});
         answer[x - 1][y] = answer[x][y] + 1;
      }
      if (y > 0 and v[x][y - 1] == '1' and answer[x][y - 1] == 0)
      {
         q.push({x, y - 1});
         answer[x][y - 1] = answer[x][y] + 1;
      }
      if (x + 1 < n and v[x + 1][y] == '1' and answer[x + 1][y] == 0)
      {
         q.push({x + 1, y});
         answer[x + 1][y] = answer[x][y] + 1;
      }
      if (y + 1 < m and v[x][y + 1] == '1' and answer[x][y + 1] == 0)
      {
         q.push({x, y + 1});
         answer[x][y + 1] = answer[x][y] + 1;
      }
      q.pop();
   }
   cout << answer[n - 1][m - 1];

   return 0;
}