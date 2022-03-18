#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, m, a, b, c;
   cin >> n >> m;
   vector<vector<vector<int>>> v(n);
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b >> c;
      v[a - 1].push_back({b - 1, c});
   }
   cin >> a >> b;
   --a, --b;
   vector<int> cnt(n, 999999999), check(n, 1);
   cnt[a] = 0;
   while (true)
   {
      check[a] = 0;
      for (int i = 0; i < v[a].size(); ++i)
         if (cnt[v[a][i][0]] > cnt[a] + v[a][i][1])
            cnt[v[a][i][0]] = cnt[a] + v[a][i][1];
      int t = 999999999;
      for (int i = 0; i < n; ++i)
         if (check[i] and cnt[i] < t)
            t = cnt[i], c = i;
      if (t == 999999999)
         break;
      a = c;
   }

   cout << cnt[b];

   return 0;
}