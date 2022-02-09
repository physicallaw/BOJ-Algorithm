#include <iostream>
#include <vector>
using namespace std;

int gcd(int, int);

int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin>>v[i];

   for (int i = 1; i < n; ++i)
   {
      int t = gcd(v[0], v[i]);
      cout<<v[0] / t<<"/"<<v[i] / t<<"\n";
   }

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}