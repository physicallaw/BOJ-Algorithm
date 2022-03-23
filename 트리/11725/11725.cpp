#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, a, b;
   cin >> n;
   vector<vector<int>> v(n);
   vector<int> check(n, -1);
   for (int i = 1; i < n; ++i)
   {
      cin >> a >> b;
      v[a - 1].push_back(b - 1);
      v[b - 1].push_back(a - 1);
   }
   queue<int> q;
   check[0] = 0;
   q.push(0);
   while (!q.empty())
   {
      for (int i = 0; i < v[q.front()].size(); ++i)
      {
         if (check[v[q.front()][i]] == -1)
         {
            check[v[q.front()][i]] = q.front();
            q.push(v[q.front()][i]);
         }
      }
      q.pop();
   }
   for (int i = 1; i < n; ++i)
      cout << check[i] + 1 << "\n";

   return 0;
}