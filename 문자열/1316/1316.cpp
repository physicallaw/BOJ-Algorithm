#include <iostream>
#include <string>
using namespace std;

template<class InputIterator, class ForwardIterator>
InputIterator find_first_not_of(InputIterator first, InputIterator last, ForwardIterator it)
{
   while (first!=last)
   {
      if (*it != *first)
         return first;
      ++first;
   }
   return last;
}

template<class InputIterator, class ForwardIterator>
InputIterator find_last_of(InputIterator first, InputIterator last, ForwardIterator it)
{
   do
   {
      if (*it == *last)
         return last;
      --last;
   } while (first != last);
   return first;
}

int main()
{
   int n, answer = 0;
   string s;
   cin>>n;
   
   for (int i = 0; i < n; ++i)
   {
      cin>>s;
      for (string::iterator it = s.begin(); it != s.end(); ++it)
      {
         if (find_first_not_of(it, s.end(), it) != find_last_of(it, s.end(), it) + 1)
         {
            --answer;
            break;
         }
      }
      ++answer;
   }
   cout<<answer;

   return 0;
}