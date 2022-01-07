#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   int answer = 0;
   cin>>s;

   for (string::iterator it = s.begin(); it != s.end(); ++it)
   {
      ++answer;
      if (*it == 'c' and *(it + 1) == '=')
         ++it;
      else if (*it == 'c' and *(it + 1) == '-')
         ++it;
      else if (*it == 'd' and *(it + 1) == 'z' and *(it + 2) == '=')
         it += 2;
      else if (*it  'd' and *(it + 1) == '-')
         ++it;
      else if (*it == 'l' and *(it + 1) == 'j')
         ++it;
      else if (*it == 'n' and *(it + 1) == 'j')
         ++it;
      else if (*it == 's' and *(it + 1) == '=')
         ++it;
      else if (*it == 'z' and *(it + 1) == '=')
         ++it;
   }

   cout<<answer;

   return 0;
}