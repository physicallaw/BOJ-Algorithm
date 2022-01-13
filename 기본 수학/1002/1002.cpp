#include <iostream>
#define dist(x1, y1, x2, y2) (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
using namespace std;

int main()
{
   int n, x1, y1, r1, x2, y2, r2, d, answer;
   cin>>n;

   for (int i = 0; i < n; ++i)
   {
      cin>>x1>>y1>>r1>>x2>>y2>>r2;
      d = dist(x1, y1, x2, y2);
      if (x1 == x2 and y1 == y2 and r1 == r2)
         answer = -1;
      else if (d == (r1 + r2) * (r1 + r2) or d == (r1 - r2) * (r1 - r2))
         answer = 1;
      else if ((r1 - r2) * (r1 - r2) < d and d < (r1 + r2) * (r1 + r2))
         answer = 2;
      else
         answer = 0;
      cout<<answer<<"\n";
   }

   return 0;
}