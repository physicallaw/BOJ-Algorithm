#include <iostream>
using namespace std;

int main()
{
   int n, a, b, t;
   cin>>n;
   a = 1, b = 1;
   
   for (int i = 1; i < n; ++i)
   {
      t = a;
      a = b;
      b = (b + t) % 15746;
   }

   cout<<b;

   return 0;
}