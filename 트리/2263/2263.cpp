#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void preorder(vector<int>::iterator it1, vector<int>::iterator it2, vector<int>::iterator it3, vector<int>::iterator it4)
{
   if (it2 - it1 > 1)
   {
      int n = *(it4 - 1);
      cout << n << " ";
      n = find(it1, it2, n) - it1;
      preorder(it1, it1 + n, it3, it3 + n);
      preorder(it1 + n + 1, it2, it3 + n, it4 - 1);
   }
   else if (it3 != it4)
      cout << *(it4 - 1) << " ";
}

int main()
{
   int n;
   cin >> n;
   vector<int> v1(n), v2(n);
   for (int i = 0; i < n; ++i)
      cin >> v1[i];
   for (int i = 0; i < n; ++i)
      cin >> v2[i];
   preorder(v1.begin(), v1.end(), v2.begin(), v2.end());

   return 0;
}