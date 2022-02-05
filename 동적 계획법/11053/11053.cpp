#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> v(n, 0), answer;
   for (int i = 0; i < n; ++i)
      cin>>v[i];
   
   answer.push_back(v[0]);
   for (int i = 1; i < n; ++i)
   {
      vector<int>::iterator it = lower_bound(answer.begin(), answer.end(), v[i]);
      if (it == answer.end())
         answer.push_back(v[i]);
      else
         *it = v[i];

   }
   cout<<answer.size();

   return 0;
}