#include <iostream>
#include <queue>

using namespace std;

int getParent(vector<int> &v, int n)
{
   if (v[n] == n)
      return n;
   else
      return v[n] = getParent(v, v[n]);
}

int main()
{
   int n, m, a, b, c;
   cin >> n >> m;
   vector<int> v(n + 1);
   for (int i = 1; i < n + 1; ++i)
      v[i] = i;
   priority_queue<vector<int>> q;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b >> c;
      q.push({-c, a, b});
   }

   int answer = 0;
   while (!q.empty())
   {
      a = q.top()[1], b = q.top()[2], c = -q.top()[0];
      int x = getParent(v, a), y = getParent(v, b);
      if (x != y)
         v[y] = x, answer += c;
      q.pop();
   }
   cout << answer;

   return 0;
}