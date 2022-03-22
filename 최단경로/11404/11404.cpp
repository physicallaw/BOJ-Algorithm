#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, m, a, b, c;
   cin >> n >> m;
   vector<vector<int>> v(n, vector<int>(n, 999999999));
   for (int i = 0; i < n; ++i)
      v[i][i] = 0;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b >> c;
      v[a - 1][b - 1] = (v[a - 1][b - 1] > c ? c : v[a - 1][b - 1]);
   }
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         for (int k = 0; k < n; ++k)
            if (v[j][k] > v[j][i] + v[i][k])
               v[j][k] = v[j][i] + v[i][k];
   for (int i = 0; i < n; ++i)
   {
      for (int j = 0; j < n; ++j)
         cout << (v[i][j] == 999999999 ? 0 : v[i][j]) << " ";
      cout << "\n";
   }

   return 0;
}