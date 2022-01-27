#include <iostream>
#include <vector>
#define MAX 41
using namespace std;

void fibonacci(int);
vector<vector<int>> v = {{1, 0}, {0, 1}};

int main()
{
   int n, t;
   cin>>n;

   for (int i = 2; i < MAX; ++i)
      v.push_back({*v.rbegin()->begin() + *(v.rbegin() + 1)->begin(), *v.rbegin()->rbegin() + *(v.rbegin() + 1)->rbegin()});

   for (int i = 0; i < n; ++i)
   {
      cin>>t;
      fibonacci(t);
   }

   return 0;
}

void fibonacci(int n)
{
   cout<<v[n][0]<<" "<<v[n][1]<<"\n";
}