#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> v = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
   int n, answer;
   cin>>n;

   for (int i = 1; i < n; ++i)
      v = {v[1] % 1000000000,
         (v[0] + v[2]) % 1000000000,
         (v[1] + v[3]) % 1000000000,
         (v[2] + v[4]) % 1000000000,
         (v[3] + v[5]) % 1000000000,
         (v[4] + v[6]) % 1000000000,
         (v[5] + v[7]) % 1000000000,
         (v[6] + v[8]) % 1000000000,
         (v[7] + v[9]) % 1000000000,
         v[8] % 1000000000
         };
   
   answer = 0;
   for (int i = 0; i < 10; ++i)
      answer = (answer + v[i]) % 1000000000;
   cout<<answer;

   return 0;
}