#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int, int);

int main()
{
   int n, m = 0;
   cin>>n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin>>v[i];

   for (int i = 0; i < n; ++i)
      for (int j = i + 1; j < n; ++j)
         m = gcd(abs(v[i] - v[j]), m);

   for (int i = 2; i * i < m; ++i)
      if (m % i == 0)
         cout<<i<<" ";
   for (int i = sqrt(m); i > 0; --i)
      if (m % i == 0)
         cout<<m / i<<" ";

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}