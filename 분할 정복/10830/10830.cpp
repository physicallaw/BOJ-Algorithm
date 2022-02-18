#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> dot(vector<vector<int>> &, vector<vector<int>> &);

int main()
{
   int n;
   long b;
   cin >> n >> b;
   vector<vector<int>> v(n, vector<int>(n));
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         cin >> v[i][j];
   vector<vector<int>> answer(n, vector<int>(n, 0));
   for (int i = 0; i < n; ++i)
      answer[i][i] = 1;

   while (b > 0)
   {
      if (b % 2)
         answer = dot(answer, v);
      v = dot(v, v);
      b /= 2;
   }
   for (int i = 0; i < n; ++i)
   {
      for (int j = 0; j < n; ++j)
         cout << answer[i][j] << " ";
      cout << "\n";
   }

   return 0;
}

vector<vector<int>> dot(vector<vector<int>> &a, vector<vector<int>> &b)
{
   int x = a.size(), y = b[0].size(), z = b.size();
   vector<vector<int>> result(x, vector<int>(y, 0));
   for (int i = 0; i < x; ++i)
      for (int j = 0; j < y; ++j)
      {
         for (int k = 0; k < z; ++k)
            result[i][j] += a[i][k] * b[k][j];
         result[i][j] %= 1000;
      }
   return result;
}