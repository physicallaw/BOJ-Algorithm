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
      q2.push(-x);
      if (q1.size() < q2.size())
      {
         q1.push(-q2.top());
         q2.pop();
      }
      cout << q1.top() << "\n";
   }

   return 0;
}