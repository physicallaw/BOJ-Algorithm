#include <iostream>
using namespace std;

int main()
{
   int a, b;
   cin>>a>>b;
   
   while (a != 0 or b != 0)
   {
      cout<<a + b<<"\n";
      cin>>a>>b;
   }

   return 0;
}