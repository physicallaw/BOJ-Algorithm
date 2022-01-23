#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void nandm(vector<int>&, int, int);

int main()
{
   int n, m;
   cin>>n>>m;
   vector<int> v;
   nandm(v, n, m);

   return 0;
}

void nandm(vector<int>& v, int n, int m)
{
   if (m == 0)
   {
      for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
         cout<<*it<<" ";
      cout<<"\n";
      return;
   }
   for (int i = 0; i < n; ++i)
   {
      if (!v.empty() and *v.rbegin() >= i + 1) continue;
      vector<int> temp = v;
      temp.push_back(i + 1);
      nandm(temp, n, m - 1);
   }
}