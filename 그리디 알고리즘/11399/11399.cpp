#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, answer = 0;
   cin>>n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin>>v[i];
   sort(v.rbegin(), v.rend());

   for (int i = 0; i < n; ++i)
      answer += v[i] * (i + 1);

   cout<<answer;

   return 0;
}