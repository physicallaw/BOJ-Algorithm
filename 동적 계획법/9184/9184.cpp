#include <iostream>
#include <vector>
using namespace std;

vector<vector<vector<int>>> v(21, vector<vector<int>> (21, vector<int> (21, -999999999)));

int w(int ,int, int);

int main()
{
   int a, b, c;
   while(cin>>a>>b>>c)
   {
      if (a == -1 and b == -1 and c == -1)
         break;
      cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a, b, c)<<"\n";
   }

   return 0;
}

int w(int a, int b, int c)
{
   if (a <= 0 or b <= 0 or c <= 0)
      return 1;
   if (a > 20 or b > 20 or c > 20)
      return w(20, 20, 20);
   if (v[a][b][c] != -999999999)
      return v[a][b][c];
   if (a < b and b < c)
      v[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
   else
      v[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
   return v[a][b][c];
}