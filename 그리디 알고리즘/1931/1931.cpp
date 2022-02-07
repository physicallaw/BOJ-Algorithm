#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool comp(vector<int> i, vector<int> j)
{
   if (i[1] == j[1])
      return i[0] < j[0];
   return i[1] < j[1];
}

int main()
{
   int n;
   int check = 0, answer = 0;
   cin>>n;
   vector<vector<int>> v (n, vector<int> (2));
   for (int i = 0; i < n; ++i)
      cin>>v[i][0]>>v[i][1];
   sort(v.begin(), v.end(), comp);

   for (int i = 0; i < n; ++i)
      if(check <= v[i][0])
         ++answer, check = v[i][1];
   cout<<answer;

   return 0;
}