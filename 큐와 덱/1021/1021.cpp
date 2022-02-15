#include <deque>
#include <iostream>
using namespace std;

int main()
{
   int n, m, temp, answer = 0;
   cin>>n>>m;
   deque<int> q;
   for (int i = 1; i <= n; ++i)
      q.push_back(i);

   for (int i = 0; i < m; ++i)
   {
      cin>>temp;
      int j = 0;
      while (q[j] != temp and q[(q.size() - j) % q.size()] != temp)
         ++j;
      if (q[j] == temp)
         for (int k = 0; k < j; ++k)
         {
            q.push_back(q.front());
            q.pop_front();
         }
      else
         for (int k = 0; k < j; ++k)
         {
            q.push_front(q.back());
            q.pop_back();
         }
      q.pop_front();
      answer += j;
   }
   cout<<answer;

   return 0;
}