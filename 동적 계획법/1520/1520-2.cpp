#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   vector<vector<int>> v(n, vector<int>(m));
   vector<vector<int>> answer(n, vector<int>(m, 0));
   priority_queue<vector<int>> q;
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j)
      {
         cin >> v[i][j];
         q.push({v[i][j], i, j});
      }
   answer[0][0] = 1;
   while (!q.empty())
   {
      int x = q.top()[1], y = q.top()[2];
      if (x > 0 and v[x - 1][y] < v[x][y])
         answer[x - 1][y] += answer[x][y];
      if (y > 0 and v[x][y - 1] < v[x][y])
         answer[x][y - 1] += answer[x][y];
      if (x + 1 < n and v[x + 1][y] < v[x][y])
         answer[x + 1][y] += answer[x][y];
      if (y + 1 < m and v[x][y + 1] < v[x][y])
         answer[x][y + 1] += answer[x][y];
      q.pop();
   }
   cout << answer[n - 1][m - 1];

   return 0;
}