#include <iostream>
#include <queue>
using namespace std;

int main()
{
   cin.tie(NULL);
   ios::sync_with_stdio(false);

   int n, x;
   cin >> n;
   priority_queue<int> q1, q2;

   for (int i = 0; i < n; ++i)
   {
      cin >> x;
      if (x < 0)
         q1.push(x);
      else if (x > 0)
         q2.push(-x);
      else if (q1.empty() and q2.empty())
         cout << 0 << "\n";
      else if (!q1.empty() and q2.empty())
      {
         cout << q1.top() << "\n";
         q1.pop();
      }
      else if (q1.empty() and !q2.empty())
      {
         cout << -q2.top() << "\n";
         q2.pop();
      }
      else if (q1.top() >= q2.top())
      {
         cout << q1.top() << "\n";
         q1.pop();
      }
      else
      {
         cout << -q2.top() << "\n";
         q2.pop();
      }
   }

   return 0;
}