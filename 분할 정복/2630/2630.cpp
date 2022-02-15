#include <iostream>
#include <vector>
using namespace std;

pair<int, int> count(vector<vector<int>> &);

int main()
{
   int n;
   cin >> n;
   vector<vector<int>> v(n, vector<int>(n));
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         cin >> v[i][j];

   pair<int, int> answer = count(v);
   cout << answer.first << "\n"
        << answer.second;

   return 0;
}

pair<int, int> count(vector<vector<int>> &v)
{
   pair<int, int> answer = {0, 0};
   int n = v.size(), sum = 0;
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         sum += v[i][j];

   if (sum == 0)
      ++answer.first;
   else if (sum == n * n)
      ++answer.second;
   else
   {
      vector<vector<int>> temp(n / 2);
      for (int i = 0; i < 2; ++i)
         for (int j = 0; j < 2; ++j)
         {
            for (int k = 0; k < n / 2; ++k)
               temp[k] = vector<int>(v[i * n / 2 + k].begin() + j * n / 2, v[i * n / 2 + k].begin() + j * n / 2 + n / 2);
            pair<int, int> result = count(temp);
            answer.first += result.first;
            answer.second += result.second;
         }
   }

   return answer;
}