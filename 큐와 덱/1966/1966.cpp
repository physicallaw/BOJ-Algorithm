#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
   queue<vector<int>> q;
   priority_queue<int> pq;
   int t, n, m, temp;
   cin>>t;
   for (int i = 0; i < t; ++i)
   {
      cin>>n>>m;
      for (int j = 0; j < n; ++j)
      {
         cin>>temp;
         q.push({temp, j});
         pq.push(temp);
      }
      int j = 1;
      while (!q.empty())
      {
         if (q.front()[0] == pq.top())
         {
            if (m == q.front()[1])
            {
               cout<<j<<"\n";
               break;
            }
            ++j;
            q.pop();
            pq.pop();
         }
         else
         {
            q.push(q.front());
            q.pop();
         }
      }
      while (!q.empty())
         q.pop();
      while (!pq.empty())
         pq.pop();
   }

   return 0;
}