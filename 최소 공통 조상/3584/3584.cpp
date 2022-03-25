#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int t, n, a, b;
   cin >> t;
   for (int i = 0; i < t; ++i)
   {
      cin >> n;
      vector<int> check(n + 1);
      for (int i = 1; i < n + 1; ++i)
         check[i] = i;
      for (int i = 1; i < n; ++i)
      {
         cin >> a >> b;
         check[b] = a;
      }
      cin >> a >> b;
      vector<int> v1, v2;
      v1.push_back(a);
      v2.push_back(b);
      while (check[*v1.rbegin()] != *v1.rbegin())
         v1.push_back(check[*v1.rbegin()]);
      while (check[*v2.rbegin()] != *v2.rbegin())
         v2.push_back(check[*v2.rbegin()]);
      vector<int>::reverse_iterator it1 = v1.rbegin(), it2 = v2.rbegin();
      while (*it1 == *it2)
         ++it1, ++it2;
      cout << *(--it1) << "\n";
   }

   return 0;
}