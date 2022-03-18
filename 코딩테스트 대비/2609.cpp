#include <iostream>

using namespace std;

int gcb(int a, int b)
{
   return b ? gcb(b, a % b) : a;
}

int lcm(int a, int b)
{
   return a * b / gcb(a, b);
}

int main()
{
   int a, b;
   cin >> a >> b;
   cout << gcb(a, b) << "\n" << lcm(a, b);
   return 0;
}