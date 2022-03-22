#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, answer = 0;
   cin >> n;

   vector<bool> check(4000001, true);
   for (int i = 2; i < 2001; ++i)
      for (int j = i * 2; j < 4000001; j += i)
         check[j] = false;
   vector<int> prime;
   for (int i = 2; i < 4000001; ++i)
      if (check[i])
         prime.push_back(i);

   int l = 0, r = 1, s = prime[0];
   while (l < r and r <= prime.size())
   {
      if (s < n)
      {
         if (r == prime.size())
            break;
         s += prime[r++];
      }
      else
      {
         if (s == n)
            ++answer;
         s -= prime[l++];
      }
   }

   cout << answer;

   return 0;
}