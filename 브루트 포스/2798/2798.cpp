#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, m;
   int answer = 0;
   cin>>n>>m;
   vector<int> v(n);

   for (int i = 0; i < n; ++i)
      cin>>v[i];
   
   for (int i = 0; i < n - 2; ++i)
      for (int j = i + 1; j < n - 1; ++j)
         for (int k = j + 1; k < n; ++k)
         {
            int temp = v[i] + v[j] + v[k];
            if (answer < temp and temp <= m)
               answer = temp;
         }

   cout<<answer;

   return 0;
}