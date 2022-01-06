#include <iostream>
#include <vector>
using namespace std;

int main()
{
   cout<<fixed;
   cout.precision(3);
    
   int c, n;
   float avg, ans;
   
   cin>>c;
   for (int i = 0; i < c; ++i)
   {
      avg = 0.f, ans = 0.f;
      cin>>n;
      vector<int> v(n);
      for (int j = 0; j < n; ++j)
      {
         cin>>v[j];
         avg += v[j];
      }
      avg /= n;

      for (int j = 0; j < n; ++j)
         if (v[j] > avg)
            ans += 1.f;
      ans = ans / n * 100;

      cout<<ans<<"%\n";
   }

   return 0;
}