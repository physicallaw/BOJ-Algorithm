#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
   int n, k;
   cin >> n >> k;
   int count = 0, answer = 0;
   map<int, int> tab;
   vector<int> v(k);
   for (int i = 0; i < k; ++i)
      cin >> v[i];
   for (int i = 0; i < k; ++i)
   {
      if (tab[v[i]])
         continue;
      if (count < n)
      {
         ++count;
         tab[v[i]] += 1;
      }
      else if (tab[v[i]])
         continue;
      else
      {
         int score = 0, rank = 0;
         for (int j = 1; j <= k; ++j)
         {
            if (tab[j])
            {
               int t = find(v.begin() + i + 1, v.end(), j) - v.begin();
               if (score < t)
               {
                  score = t;
                  rank = j;
               }
            }
         }
         tab[rank] = 0;
         tab[v[i]] += 1;
         ++answer;
      }
   }
   cout << answer;

   return 0;
}