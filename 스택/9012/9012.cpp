#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
   stack<bool> s;
   int n;
   cin>>n;

   for (int i = 0; i < n; ++i)
   {
      string t;
      cin>>t;
      for (int j = 0; j < t.size(); ++j)
      {
         if (s.empty() or t[j] == '(')
            s.push(t[j] - '(');
         else if (!s.top())
            s.pop();
         else
            s.push(true);
      }
      if (s.empty())
         cout<<"YES\n";
      else
         cout<<"NO\n";
      while (!s.empty())
         s.pop();
   }

   return 0;
}