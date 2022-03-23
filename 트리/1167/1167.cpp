#include <iostream>
#include <vector>

using namespace std;

vector<int> dfs(vector<vector<vector<int>>> &v, int node = 0, int parent = -1, int depth = 0)
{
   vector<int> result = {node, depth};
   for (int i = 0; i < v[node].size(); ++i)
   {
      if (v[node][i][0] != parent)
      {
         vector<int> temp = dfs(v, v[node][i][0], node, depth + v[node][i][1]);
         if (temp[1] > result[1])
            result = temp;
      }
   }
   return result;
}

int main()
{
   int n, a, b, c;
   cin >> n;
   vector<vector<vector<int>>> v(n);
   for (int i = 0; i < n; ++i)
   {
      cin >> a >> b;
      while (b != -1)
      {
         cin >> c;
         v[a - 1].push_back({b - 1, c});
         cin >> b;
      }
   }
   vector<int> temp = dfs(v);
   temp = dfs(v, temp[0]);
   cout << temp[1];

   return 0;
}