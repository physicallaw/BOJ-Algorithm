#include <iostream>
#include <string>
#include <vector>
using namespace std;

void count(vector<string> &);

int main()
{
   int n;
   cin >> n;
   vector<string> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   count(v);

   return 0;
}

void count(vector<string> &v)
{
   int n = v.size(), sum = 0;
   for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
         if (v[i][j] == '1')
            ++sum;
   if (sum == n * n)
      cout << 1;
   else if (sum == 0)
      cout << 0;
   else
   {
      cout << "(";
      vector<string> temp(n / 2);
      for (int i = 0; i < 2; ++i)
         for (int j = 0; j < 2; ++j)
         {
            for (int k = 0; k < n / 2; ++k)
               temp[k] = string(v[i * n / 2 + k].begin() + j * n / 2, v[i * n / 2 + k].begin() + j * n / 2 + n / 2);
            count(temp);
         }
      cout << ")";
   }
}