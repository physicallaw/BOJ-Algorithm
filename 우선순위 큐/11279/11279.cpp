#include <iostream>
#include <queue>
using namespace std;

int main()
{
   cin.tie(NULL);
   ios::sync_with_stdio(false);
   
   int n, x;
   cin >> n;
   priority_queue<int> q;

   for (int i = 0; i < n; ++i)
   {
      cin >> x;
      if (x)
         q.push(x);
      else if (q.empty())
         cout << 0 << "\n";
      else
      {
         cout << q.top() << "\n";
         q.pop();
      }
   }

   return 0;
}