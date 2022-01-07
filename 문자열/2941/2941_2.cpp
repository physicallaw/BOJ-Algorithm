#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
   string s;
   int pos;
   vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
   cin>>s;

   for (int i = 0; i < croatian.size(); ++i)
      while ((pos = s.find(croatian[i])) != string::npos)
         s.replace(pos, croatian[i].size(), "0");

   cout<<s.size();

   return 0;
}