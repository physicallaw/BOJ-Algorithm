#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, a, b, answer = 999999999;
   cin>>n;
   vector<vector<int>> v (n, vector<int> (n));
   vector<int> check (n, 1);
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         cin>>v[i][j];
   for (int i = 0; i < n / 2; ++i)
      check[i] = 0;
   
   do
   {
      a = 0, b = 0;
      for (int i = 0; i < n; ++i)
         for (int j = 0; j < n; ++j)
            if (check[i] == check[j])
               if (check[i] == 0)
                  a += v[i][j];
               else
                  b += v[i][j];
      answer = min(answer, (a > b ? a - b : b - a));
   } while (next_permutation(check.begin(), check.end()));
   cout<<answer;

   return 0;
}