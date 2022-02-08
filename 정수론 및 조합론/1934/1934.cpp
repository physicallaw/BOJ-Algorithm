#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
   int n, a, b;
   cin>>n;
   for (int i = 0; i < n; ++i)
   {
      cin>>a>>b;
      cout<<a * b / gcd(a, b)<<"\n";
   }

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}