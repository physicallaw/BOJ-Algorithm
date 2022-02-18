#include <iostream>
using namespace std;

long cal(long, long, long);

int main()
{
   int a, b, c;
   cin >> a >> b >> c;
   cout << cal(a, b, c);

   return 0;
}

long cal(long a, long b, long c)
{
   long answer = 1;
   while (b > 0)
   {
      if (b % 2)
         answer = answer * a % c;
      a = a * a % c;
      b /= 2;
   }

   return answer;
}