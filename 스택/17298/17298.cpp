#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
   stack<int> s;
   int n;
   cin>>n;
   vector<int> v(n), answer(n);
   for (int i = 0; i < n; ++i)
      cin>>v[i];
   
   for (int i = n - 1; i >= 0; --i)
   {
      while (!s.empty() and s.top() <= v[i])
         s.pop();
      answer[i] = s.empty() ? -1 : s.top();
      s.push(v[i]);
   }
   for (int i = 0; i < n; ++i)
      cout<<answer[i]<<" ";

   return 0;
}