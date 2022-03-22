#include <iostream>
#include <queue>

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
   vector<long long> answer(n, 999999999), temp;
   answer[0] = 0;
   for (int i = 0; i < n; ++i)
   {
      vector<int> check(n, 1);
      check[0] = 0;
      queue<int> q;
      q.push(0);
      while (!q.empty())
      {
         for (int j = 0; j < v[q.front()].size(); ++j)
         {
            if (answer[v[q.front()][j][0]] > answer[q.front()] + v[q.front()][j][1])
               answer[v[q.front()][j][0]] = answer[q.front()] + v[q.front()][j][1];
            if (check[v[q.front()][j][0]])
            {
               check[v[q.front()][j][0]] = 0;
               q.push(v[q.front()][j][0]);
            }
         }
         q.pop();
      }
      if (i == n - 2)
         temp = answer;
   }
   if (answer == temp)
      for (int i = 1; i < n; ++i)
         cout << (answer[i] == 999999999 ? -1 : answer[i]) << "\n";
   else
      cout << -1;

   return 0;
}