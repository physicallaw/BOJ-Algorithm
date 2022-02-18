#include <iostream>
#include <vector>
using namespace std;

vector<vector<long>> dot(vector<vector<long>> &, vector<vector<long>> &);

int main()
{
   long long n;
   cin >> n;
   vector<vector<long>> v = {{0, 1}, {1, 1}};
   vector<vector<long>> answer = {{1, 0}, {0, 1}};
   
   while (n)
   {
      if (n % 2)
         answer = dot(answer, v);
      v = dot(v, v);
      n /= 2;
   }
   cout << answer[0][1];

   return 0;
}

vector<vector<long>> dot(vector<vector<long>> &a, vector<vector<long>> &b)
{
   int x = a.size(), y = b[0].size(), z = b.size();
   vector<vector<long>> result(x, vector<long>(y, 0));
   for (int i = 0; i < x; ++i)
      for (int j = 0; j < y; ++j)
      {
         for (int k = 0; k < z; ++k)
            result[i][j] += a[i][k] * b[k][j];
         result[i][j] %= 1000000007;
      }
   return result;
}