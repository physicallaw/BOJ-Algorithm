#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int, int, int);

int main()
{
   int n;
   cin>>n;
   cout<<static_cast<int> (pow(2, n)) - 1<<"\n";
   hanoi(n, 0, 2);

   return 0;
}

void hanoi(int n, int a, int b)
{
   if (n == 1)
   {
      cout<<a + 1<<" "<<b + 1<<"\n";
      return;
   }
   hanoi(n - 1, a, 3 - a - b);
   hanoi(1, a, b);
   hanoi(n - 1, 3 - a - b, b);
}