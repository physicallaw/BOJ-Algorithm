#include <algorithm>
#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<string> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   queue<vector<int>> q;
   vector<int> answer;
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
      {
         if (v[i][j] == '1')
         {
            int sum = 1;
            v[i][j] = '0';
            q.push({i, j});
            while (!q.empty())
            {
               int x = q.front()[0], y = q.front()[1];
               if (x > 0 and v[x - 1][y] == '1')
               {
                  ++sum;
                  v[x - 1][y] = '0';
                  q.push({x - 1, y});
               }
               if (y > 0 and v[x][y - 1] == '1')
               {
                  ++sum;
                  v[x][y - 1] = '0';
                  q.push({x, y - 1});
               }
               if (x + 1 < n and v[x + 1][y] == '1')
               {
                  ++sum;
                  v[x + 1][y] = '0';
                  q.push({x + 1, y});
               }
               if (y + 1 < n and v[x][y + 1] == '1')
               {
                  ++sum;
                  v[x][y + 1] = '0';
                  q.push({x, y + 1});
               }
               q.pop();
            }
            answer.push_back(sum);
         }
      }
   sort(answer.begin(), answer.end());
   cout << answer.size() << "\n";
   for (int i = 0; i < answer.size(); ++i)
      cout << answer[i] << "\n";

   return 0;
}