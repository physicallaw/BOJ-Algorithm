#include <iostream>
#include <cmath>
using namespace std;

int decompose(int);

int main()
{
   int n;
   cin>>n;
   cout<<decompose(n);

   return 0;
}

int decompose(int n)
{
   int d = floor(log10(n) + 1);
   for (int i = n - d * 10; i < n; ++i)
   {
      int temp = i;
      for (int j = i; j > 0; j /= 10)
         temp += j % 10;
      if (n == temp)
         return i;
   }
   return 0;
}