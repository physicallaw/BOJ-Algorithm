#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, m, a, b, c, d;
   cin >> n >> m;
   vector<vector<int>> v(n, vector<int>(n, 99999999));
   for (int i = 0; i < n; ++i)
      v[i][i] = 0;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b >> c;
      v[a - 1][b - 1] = c;
      v[b - 1][a - 1] = c;
   }
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         for (int k = j + 1; k < n; ++k)
            if (v[j][k] > v[j][i] + v[i][k])
            {
               v[j][k] = v[j][i] + v[i][k];
               v[k][j] = v[j][i] + v[i][k];
            }
   cin >> a >> b;
   c = v[0][a - 1] + v[a - 1][b - 1] + v[b - 1][n - 1];
   d = v[0][b - 1] + v[b - 1][a - 1] + v[a - 1][n - 1];
   a = c < d ? c : d;
   cout << (a < 99999999 ? a : -1);

   return 0;
}