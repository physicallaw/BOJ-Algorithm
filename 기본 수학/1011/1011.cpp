#include <iostream>
using namespace std;

unsigned int fly(unsigned int, unsigned int);

int main()
{
   unsigned int n, a, b;
   cin>>n;
   for (unsigned int i = 0; i < n; ++i)
   {
      cin>>a>>b;
      cout<<fly(a, b)<<"\n";
   }

   return 0;
}

unsigned int fly(unsigned int a, unsigned int b)
{
   unsigned int n = b - a, check = 0, i;

   for (i = 0; check < n; check += (i + 1) / 2)
      ++i;

   return i;
}