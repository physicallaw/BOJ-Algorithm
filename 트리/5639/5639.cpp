#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void postorder(vector<int>::iterator it1, vector<int>::iterator it2)
{
   if (it2 - it1 > 1)
   {
      vector<int>::iterator it3 = upper_bound(it1 + 1, it2, *it1);
      postorder(it1 + 1, it3);
      postorder(it3, it2);
      cout << *it1 << "\n";
   }
   else if (it2 != it1)
      cout << *it1 << "\n";
}

int main()
{
   vector<int> v;
   int n;
   while (cin >> n)
      v.push_back(n);
   postorder(v.begin(), v.end());

   return 0;
}