#include <iostream>
using namespace std;

int gcd(int, int);
int lcm(int, int);

int main()
{
   int a, b;
   cin>>a>>b;
   cout<<gcd(a, b)<<"\n"<<lcm(a, b);

   return 0;
}

int gcd(int a, int b)
{
   return b ? gcd(b, a % b) : a;
}
int lcm(int a, int b)
{
   return a * b / gcd(a, b);
}