#include <cstdio>
#include <queue>

using namespace std;

int getParent(vector<int> &v, int n)
{
   if (v[n] == n)
      return n;
   return v[n] = getParent(v, v[n]);
}

int main()
{
   int n, m, a, b, c;
   scanf("%d %d", &n, &m);
   while (n or m)
   {
      vector<int> v(n);
      for (int i = 0; i < n; ++i)
         v[i] = i;

      priority_queue<vector<int>> q;
      int answer = 0;
      for (int i = 0; i < m; ++i)
      {
         scanf("%d %d %d", &a, &b, &c);
         answer += c;
         q.push({-c, a, b});
      }

      while (!q.empty())
      {
         a = q.top()[1], b = q.top()[2], c = -q.top()[0];
         int x = getParent(v, a), y = getParent(v, b);
         if (x != y)
         {
            v[x > y ? x : y] = x < y ? x : y;
            answer -= c;
         }
         q.pop();
      }
      printf("%d\n", answer);
      scanf("%d %d", &n, &m);
   }

   return 0;
}