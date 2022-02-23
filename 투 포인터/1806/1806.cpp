#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, m, answer = 100000;
   cin >> n >> m;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];

   int l = 0, r = 1, sum = v[l];
   while (r <= n)
   {
      if (sum >= m)
      {
         answer = answer < r - l ? answer : r - l;
         sum -= v[l++];
      }  
      else if (r < n)
         sum += v[r++];
      else
         ++r;
   }
   cout << (answer == 100000 ? 0 : answer);

   return 0;
}