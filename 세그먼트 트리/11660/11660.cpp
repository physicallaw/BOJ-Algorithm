#include <cstdio>
#include <vector>

using namespace std;

int main()
{
   int n, m, a, b, c, d;
   scanf("%d %d", &n, &m);
   vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
   for (int i = 1; i <= n; ++i)
      for (int j = 1; j <= n; ++j)
      {
         scanf("%d", &v[i][j]);
         v[i][j] += v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1];
      }
   for (int i = 0; i < m; ++i)
   {
      scanf("%d %d %d %d", &a, &b, &c, &d);
      printf("%d\n", v[c][d] - v[c][b - 1] - v[a - 1][d] + v[a - 1][b - 1]);
   }

   return 0;
}