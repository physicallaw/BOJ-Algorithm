#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

int main()
{
   int n, l = 0, temp = -2000000000;
   cin>>n;
   vector<int> v(n);
   priority_queue<int> q;
   map<int, int> m;
   for (int i = 0; i < n; ++i)
   {
      cin>>v[i];
      q.push(-v[i]);
   }

   while(!q.empty())
   {
      if (temp != -q.top())
      {
         m[-q.top()] = l;
         ++l;
         temp = -q.top();
      }
      q.pop();
   }

   for (int i = 0; i < n; ++i)
      cout<<m[v[i]]<<" ";

   return 0;
}