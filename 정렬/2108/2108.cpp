#include <iostream>
#include <vector>
#include <algorithm>
#define RANGE 8001
using namespace std;

int main()
{
   cout<<fixed;
   cout.precision(0);
    
   int n;
   int sum = 0, m = 0, answer1 = 0, answer2 = 0;
   cin >> n;
   vector<int> v(n), cnt(RANGE, 0);
   for (int i = 0; i < n; ++i)
   {
      cin >> v[i];
      sum += v[i];
      ++cnt[v[i] + RANGE / 2];
   }

   sort(v.begin(), v.end());
   for (int i = 0; i < RANGE; ++i)
   {
      if (m == cnt[i] and answer1 == answer2)
         answer2 = i - RANGE / 2;
      else if (m < cnt[i])
         m = cnt[i], answer1 = i - RANGE / 2, answer2 = i - RANGE / 2;
   }

   cout<<static_cast<double> (1.L * sum / n)<<"\n";
   cout<<v[n / 2]<<"\n";
   cout<<answer2<<"\n";
   cout<<v[n - 1] - v[0];

   return 0;
}