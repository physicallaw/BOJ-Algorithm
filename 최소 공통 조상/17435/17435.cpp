#include <cstdio>
#include <vector>

using namespace std;

int main()
{
   int n, t, a, b;
   scanf("%d", &n);
   vector<vector<int>> v(19, vector<int>(n + 1));
   for (int i = 1; i < n + 1; ++i)
      scanf("%d", &v[0][i]);
   for (int i = 0; i < 18; ++i)
      for (int j = 1; j < n + 1; ++j)
         v[i + 1][j] = v[i][v[i][j]];
   scanf("%d", &t);
   for (int i = 0; i < t; ++i)
   {
      scanf("%d %d", &a, &b);
      vector<int> bin;
      while (a > 1)
      {
         bin.push_back(a % 2);
         a /= 2;
      }
      bin.push_back(a);
      int answer = b;
      for (int j = 0; j < bin.size(); ++j)
         if (bin[j])
            answer = v[j][answer];
      printf("%d\n", answer);
   }

   return 0;
}