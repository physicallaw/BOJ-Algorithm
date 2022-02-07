#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string, char);

int main()
{
   string s;
   cin>>s;
   vector<string> v = split(s, '-');
   int answer = 0;
   for (int i = 0; i < v.size(); ++i)
   {
      int sum = 0;
      vector<string> temp = split(v[i], '+');
      for (vector<string>::iterator it = temp.begin(); it != temp.end(); ++it)
         sum += stoi(*it);
      if (i) answer -= sum;
      else answer += sum;
   }
   cout<<answer;

   return 0;
}

vector<string> split(string s, char c)
{
   vector<string> result;
   string::iterator lit = s.begin();
   for (string::iterator rit = s.begin(); rit != s.end(); ++rit)
      if (*rit == c)
      {
         result.push_back(string (lit, rit));
         lit = rit + 1;
      }
   result.push_back(string (lit, s.end()));
   return result;
}