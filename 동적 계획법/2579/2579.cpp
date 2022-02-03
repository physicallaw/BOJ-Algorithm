#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> v(n + 2, 0), answer(n + 2, 0);
   for (int i = 2; i < n + 2; ++i)
      cin>>v[i];
   
   answer[2] = v[2];
   for (int i = 3; i < n + 2; ++i)
      answer[i] = v[i] + max(answer[i - 3] + v[i - 1], answer[i - 2]);
   cout<<answer[n + 1];

   return 0;
}