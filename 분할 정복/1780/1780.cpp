#include <iostream>
#include <vector>
using namespace std;

vector<int> count(vector<vector<int>> &);

int main()
{
   int n;
   cin >> n;
   vector<vector<int>> v(n, vector<int>(n));
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         cin >> v[i][j];
   vector<int> answer = count(v);
   for (int i = 0; i < 3; ++i)
      cout << answer[i] << "\n";

   return 0;
}

vector<int> count(vector<vector<int>> &v)
{
   int n = v.size(), sum = 0, cnt = 0;
   vector<int> result(3, 0);
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
      {
         sum += v[i][j];
         if (!v[i][j])
            ++cnt;
      }
   if (sum == n * n)
      ++result[2];
   else if (sum == -n * n)
      ++result[0];
   else if (cnt == n * n)
      ++result[1];
   else
   {
      vector<vector<int>> temp(n / 3);
      for (int i = 0; i < 3; ++i)
         for (int j = 0; j < 3; ++j)
         {
            for (int k = 0; k < n / 3; ++k)
               temp[k] = vector<int>(v[i * n / 3 + k].begin() + j * n / 3, v[i * n / 3 + k].begin() + j * n / 3 + n / 3);
            vector<int> result2 = count(temp);
            result[0] += result2[0];
            result[1] += result2[1];
            result[2] += result2[2];
         }
   }
   return result;
}