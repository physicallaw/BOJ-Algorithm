#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int t, n, m, l, a, b;
   cin >> t;
   for (int k = 0; k < t; ++k)
   {
      cin >> n >> m >> l;
      vector<vector<int>> v(n, vector<int>(m, 0));
      for (int i = 0; i < l; ++i)
      {
         cin >> a >> b;
         v[a][b] = 1;
      }
      queue<vector<int>> q;
      int answer = 0;
      for (int i = 0; i < n; ++i)
         for (int j = 0; j < m; ++j)
            if (v[i][j])
            {
               ++answer;
               v[i][j] = 0;
               q.push({i, j});
               while (!q.empty())
               {
                  int x = q.front()[0], y = q.front()[1];
                  if (x > 0 and v[x - 1][y])
                  {
                     v[x - 1][y] = 0;
                     q.push({x - 1, y});
                  }
                  if (y > 0 and v[x][y - 1])
                  {
                     v[x][y - 1] = 0;
                     q.push({x, y - 1});
                  }
                  if (x + 1 < n and v[x + 1][y])
                  {
                     v[x + 1][y] = 0;
                     q.push({x + 1, y});
                  }
                  if (y + 1 < m and v[x][y + 1])
                  {
                     v[x][y + 1] = 0;
                     q.push({x, y + 1});
                  }
                  q.pop();
               }
            }
      cout << answer << "\n";
   }
   return 0;
}