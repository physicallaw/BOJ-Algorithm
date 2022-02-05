#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> v(n + 3, 0), answer(n + 3, 0);
   for (int i = 3; i < n + 3; ++i)
      cin>>v[i];
   
   for (int i = 3; i < n + 3; ++i)
      answer[i] = max(answer[i - 1], v[i] + max(answer[i - 3] + v[i - 1], answer[i - 2]));
   cout<<answer[n + 2];

   return 0;
}