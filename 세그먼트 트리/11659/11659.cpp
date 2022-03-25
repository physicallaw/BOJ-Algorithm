#include <cstdio>
#include <vector>

using namespace std;

int main()
{
   int n, m, a, b;
   scanf("%d %d", &n, &m);
   vector<int> v(n + 1, 0);
   scanf("%d", &v[1]);
   for (int i = 1; i < n; ++i)
   {
      scanf("%d", &v[i + 1]);
      v[i + 1] += v[i];
   }
   for (int i = 0; i < m; ++i)
   {
      scanf("%d %d", &a, &b);
      printf("%d\n", v[b] - v[a - 1]);
   }

   return 0;
}