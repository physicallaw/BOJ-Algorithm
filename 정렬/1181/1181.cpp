#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
   if (a.size() == b.size())
      return (a < b);
   return (a.size() < b.size());
}

int main()
{
   int n;
   cin>>n;
   vector<string> v(n, string ());
   for (int i = 0; i < n; ++i)
      cin>>v[i];
   
   sort(v.begin(), v.end(), compare);
   cout<<v[0]<<"\n";
   for (int i = 1; i < n; ++i)
      if (v[i - 1] != v[i])
         cout<<v[i]<<"\n";

   return 0;
}