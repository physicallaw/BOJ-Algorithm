#include <iostream>
#include <vector>
using namespace std;

int nqueen(vector<int>&, int);

template<class InputIterator, class T>
InputIterator find(InputIterator, InputIterator, const T&);

int main()
{
   int n;
   cin>>n;
   vector<int> v;
   cout<<nqueen(v, n);

   return 0;
}

template<class InputIterator, class T>
   InputIterator find(InputIterator first, InputIterator last, const T& val)
{
   InputIterator it = first;
   while (it != last)
   {
      if (*it == val)
         return it;
      if (*it - (it - first) == val - (last - first))
         return it;
      if (*it + (it - first) == val + (last - first))
         return it;
      ++it;
   }
   return last;
}

int nqueen(vector<int>& v, int n)
{
   if (v.size() == n)
      return 1;
   int answer = 0;
   for (int i = 0; i < n; ++i)
   {
      if (find(v.begin(), v.end(), i) != v.end()) continue;
      vector<int> temp = v;
      temp.push_back(i);
      answer += nqueen(temp, n);
   }
   return answer;
}