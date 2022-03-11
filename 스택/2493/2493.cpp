#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   stack<vector<int>> s;

   for (int i = 0; i < n; ++i)
   {
      while (!s.empty() and s.top()[0] < v[i])
         s.pop();
      cout << (s.empty() ? 0 : s.top()[1] + 1) << " ";
      s.push({v[i], i});
   }

   return 0;
}