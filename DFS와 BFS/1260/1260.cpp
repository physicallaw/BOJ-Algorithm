#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

void dfs(vector<vector<int>> &, vector<int> &, int);
void bfs(vector<vector<int>> &, vector<int> &, int);

int main()
{
   int n, m, l, a, b;
   cin >> n >> m >> l;
   vector<vector<int>> v(n);
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b;
      v[a - 1].push_back(b - 1);
      v[b - 1].push_back(a - 1);
   }
   for (int i = 0; i < n; ++i)
      sort(v[i].begin(), v[i].end());
   vector<int> check(n, 1);
   dfs(v, check, l - 1);
   cout << "\n";
   check = vector<int>(n, 1);
   bfs(v, check, l - 1);

   return 0;
}

void dfs(vector<vector<int>> &v, vector<int> &check, int l)
{
   cout << l + 1 << " ";
   check[l] = 0;
   for (int i = 0; i < v[l].size(); ++i)
      if (check[v[l][i]])
         dfs(v, check, v[l][i]);
}

void bfs(vector<vector<int>> &v, vector<int> &check, int l)
{
   queue<int> q;
   q.push(l);
   check[l] = 0;
   while (!q.empty())
   {
      cout << q.front() + 1 << " ";
      for (int i = 0; i < v[q.front()].size(); ++i)
         if (check[v[q.front()][i]])
         {
            q.push(v[q.front()][i]);
            check[v[q.front()][i]] = 0;
         }
      q.pop();
   }
}