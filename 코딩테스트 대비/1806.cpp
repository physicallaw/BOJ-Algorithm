#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   int answer = 999999999, l = 0, r = 1, s = v[0];
   while (r < n or s >= m)
   {
      if (s < m)
         s += v[r++];
      else
      {
         answer = answer > r - l ? r - l : answer;
         s -= v[l++];
      }
   }
   cout << (answer == 999999999 ? 0 : answer);

   return 0;
}