#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> cost(n);
   for (int i = 0; i < n; ++i)
      cin >> cost[i];
   vector<vector<int>> v(1, vector<int>(n, 0));
   v[0][0] = 1;
   for (int i = 0; i < m; ++i)
   {
      vector<int> t;
      for (int j = 0; j < cost.size(); ++j)
      {
         int tt = 0;
         if (v.size() >= cost[j])
            for (int k = 0; k < j + 1; ++k)
               tt += v[v.size() - cost[j]][k];
         t.push_back(tt);
      }
      v.push_back(t);
   }
   long answer = 0;
   for (int i = 0; i < n; ++i)
      answer += static_cast<long>(v[v.size() - 1][i]);
   cout << answer;

   return 0;
}