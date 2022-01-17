#include <iostream>
#define MAX 10001
using namespace std;

int main()
{
   cin.tie(NULL);
   ios::sync_with_stdio(false);

   int n, temp;
   int arr[MAX] = {0};
   cin>>n;
   for (int i = 0; i < n; ++i)
   {
      cin>>temp;
      ++arr[temp];
   }
   
   for (int i = 0; i < MAX; ++i)
      for (int j = 0; j < arr[i]; ++j)
         cout<<i<<"\n";

   return 0;
}