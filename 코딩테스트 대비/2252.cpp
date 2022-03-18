#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, m, a, b;
   cin >> n >> m;
   vector<vector<int>> v(n);
   vector<int> check(n, 0);
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      v[a - 1].push_back(b - 1);
      ++check[b - 1];
   }
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         if (!check[j])
         {
            --check[j];
            cout << j + 1 << " ";
            for (int k = 0; k < v[j].size(); ++k)
               --check[v[j][k]];
            break;
         }

   return 0;
}