#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack<int> s;
   int n, t, answer = 0;
   cin>>n;

   for (int i = 0; i < n; ++i)
   {
      cin>>t;
      answer += t;
      if (t)
         s.push(t);
      else
      {
         answer -= s.top();
         s.pop();
      }
   }
   cout<<answer;

   return 0;
}