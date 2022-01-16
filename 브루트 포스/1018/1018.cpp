#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   int n, m;
   int answer = 999999999;
   string s;   
   cin>>n>>m;
   int arr[n][m];

   for (int i = 0; i < n; ++i)
   {
      cin>>s;
      for(int j = 0; j < m; ++j)
      {
         if (s[j] == 'B')
            arr[i][j] = 0;
         else
            arr[i][j] = 1;
      }
   }

   for (int i = 0; i < n - 7; ++i)
      for (int j = 0; j < m - 7; ++j)
      {
         int answer1 = 0, answer2 = 0;
         for (int k = i; k < i + 8; ++k)
            for (int l = j; l < j + 8; ++l)
            {
               answer1 += arr[k][l] ^ ((k + l) % 2);
               answer2 += arr[k][l] ^ ((k + l + 1) % 2);
            }
         answer = min(min(answer1, answer2), answer);
      }
   cout<<answer;

   return 0;
}