#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<vector<int>> &v, bitset<250000> s, int a = 0, int b = 0)
{
   if (a + 1 == v.size() and b + 1 == v[0].size())
      return 1;
   int answer = 0;
   s[a * v[0].size() + b] = 1;
   if (a + 1 < v.size() and v[a][b] > v[a + 1][b] and s[(a + 1) * v[0].size() + b] == 0)
      answer += dfs(v, s, a + 1, b);
   if (b + 1 < v[0].size() and v[a][b] > v[a][b + 1] and s[a * v[0].size() + b + 1] == 0)
      answer += dfs(v, s, a, b + 1);
   if (a > 0 and v[a][b] > v[a - 1][b] and s[(a - 1) * v[0].size() + b] == 0)
      answer += dfs(v, s, a - 1, b);
   if (b > 0 and v[a][b] > v[a][b - 1] and s[a * v[0].size() + b - 1] == 0)
      answer += dfs(v, s, a, b - 1);
   return answer;
}

int main()
{
   int n, m;
   cin >> n >> m;
   vector<vector<int>> v(n, vector<int>(m));
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j)
         cin >> v[i][j];
   bitset<250000> s;
   cout << dfs(v, s);

   return 0;
}