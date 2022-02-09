#include <algorithm>
#include <iostream>
using namespace std;

int cal(int, int);

int main()
{
   int n, m;
   cin>>n>>m;
   cout<<min(cal(n, 2) - cal(m, 2) - cal(n - m, 2), 
   cal(n, 5) - cal(m, 5) - cal(n - m, 5));

   return 0;
}

int cal(int n, int f)
{
   int result = 0;
   while (n >= f)
   {
      n /= f;
      result += n;
   }
   return result;
}