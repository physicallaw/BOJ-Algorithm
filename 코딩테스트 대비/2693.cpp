#include <iostream>
#include <queue>

using namespace std;

int main()
{
   int n, t;
   cin >> n;
   for (int i = 0; i < n; ++i)
   {
      priority_queue<int> q;
      for (int j = 0; j < 10; ++j)
      {
         cin >> t;
         q.push(t);
      }
      q.pop();
      q.pop();
      cout<<q.top()<<"\n";
   }

   return 0;
}