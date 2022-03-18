#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, m, a, b, c;
   cin >> n >> m;
   vector<int> check(n);
   for (int i = 0; i < n; ++i)
      check[i] = i;
   priority_queue<vector<int>> q;
   for (int i = 0; i < m; ++i)
   {
      cin >> a >> b >> c;
      q.push({-c, a - 1, b - 1});
   }

   int answer = 0;
   for (int i = 0; i < n - 1;)
   {
      if (check[q.top()[1]] != check[q.top()[2]])
      {
         int t = check[q.top()[2]];
         for (int i = 0; i < n; ++i)
            if (check[i] == t)
               check[i] = check[q.top()[1]];
         answer -= q.top()[0];
         ++i;
      }
      q.pop();
   }
   cout << answer;

   return 0;
}