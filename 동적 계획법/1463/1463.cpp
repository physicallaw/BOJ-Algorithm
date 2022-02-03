#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> v(n + 1, 999999999);
   v[1] = 0;

   for (int i = 1; i < n + 1; ++i)
   {
      if (i * 3 < n + 1 and v[i * 3] > v[i] + 1)
         v[i * 3] = v[i] + 1;
      if (i * 2 < n + 1 and v[i * 2] > v[i] + 1)
         v[i * 2] = v[i] + 1;
      if (i < n and v[i + 1] > v[i] + 1)
         v[i + 1] = v[i] + 1;
   }

   cout<<v[n];

   return 0;
}