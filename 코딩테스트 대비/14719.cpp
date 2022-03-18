#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int h, w;
   cin >> h >> w;
   int answer = 0;
   vector<int> v(w);
   for (int i = 0; i < w; ++i)
      cin >> v[i];

   for (int i = 0; i < w; ++i)
   {
      int s = 0;
      for (int j = v[i]; j >= 0; --j)
         for (int k = i + 1; k < w and j > v[k]; ++k)
         {
            ++s;
            if (k == w - 1)
               s = 0;
         }
      answer += s;
   }
   cout << answer;

   return 0;
}