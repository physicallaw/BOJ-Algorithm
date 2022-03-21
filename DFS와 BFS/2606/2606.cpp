#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int answer = 0;
   int n, m, a, b;
   cin >> n >> m;
   vector<vector<int>> path(n);
   vector<int> check(n, 1);
   check[0] = 0;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      path[a - 1].push_back(b - 1);
      path[b - 1].push_back(a - 1);
   }
   queue<int> q;
   q.push(0);
   while (!q.empty())
   {
      for (int i = 0; i < path[q.front()].size(); ++i)
         if (check[path[q.front()][i]])
         {
            ++answer;
            check[path[q.front()][i]] = 0;
            q.push(path[q.front()][i]);
         }
      q.pop();
   }
   cout << answer;

   return 0;
}