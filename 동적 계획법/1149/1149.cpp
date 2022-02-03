#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> answer(3, 0);
   int n, a, b, c;
   cin>>n;
   for (int i = 0; i < n; ++i)
   {
      cin>>a>>b>>c;
      answer = {a + min(answer[1], answer[2]), b + min(answer[0], answer[2]), c + min(answer[0], answer[1])};
   }

   cout<<*min_element(answer.begin(), answer.end());

   return 0;
}