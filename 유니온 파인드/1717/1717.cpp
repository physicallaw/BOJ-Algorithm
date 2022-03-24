#include <cstdio>
#include <vector>

using namespace std;

int getparent(vector<int> &v, int n)
{
   if (v[n] == n) return n;
   return v[n] = getparent(v, v[n]);
}

int main()
{
   int n, m, a, b, c, x, y;
   scanf("%d %d", &n, &m);
   vector<int> v(n + 1);
   for (int i = 0; i < n + 1; ++i)
      v[i] = i;
   for (int i = 0; i < m; ++i)
   {
      scanf("%d %d %d", &a, &b, &c);
      x = getparent(v, b), y = getparent(v, c);
      if (a == 0)
         v[y] = x;
      else if (x == y)
         printf("YES\n");
      else
         printf("NO\n");
   }

   return 0;
}