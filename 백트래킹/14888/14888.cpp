#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> v(n), op, result;
   for (int i = 0; i < n; ++i)
      cin>>v[i];
   for (int i = 0; i < 4; ++i)
   {
      int m;
      cin>>m;
      for (int j = 0; j < m; ++j)
         op.push_back(i);
   }

   do
   {
      int temp = v[0];
      for (int i = 1; i < n; ++i)
      {
         if (op[i - 1] == 0)
            temp += v[i];
         else if (op[i - 1] == 1)
            temp -= v[i];
         else if (op[i - 1] == 2)
            temp *= v[i];
         else
            temp /= v[i];
      }
      
      result.push_back(temp);
   } while (next_permutation(op.begin(), op.end()));
   
   sort(result.begin(), result.end());
   cout<<*result.rbegin()<<"\n"<<*result.begin();

   return 0;
}