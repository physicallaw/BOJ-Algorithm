#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, price, answer = 0;
   cin>>n>>price;
   vector<int> coin(n);

   for (int i = 0; i < n; ++i)
      cin>>coin[i];

   for (auto it = coin.rbegin(); it != coin.rend(); ++it)
   {
      answer += price / *it;
      price %= *it;
   }

   cout<<answer;

   return 0;
}