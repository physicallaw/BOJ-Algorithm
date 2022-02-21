#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <class ForwardIterator, class T>
T cut(ForwardIterator, ForwardIterator, const T &);

template <class ForwardIterator, class T>
T check(ForwardIterator, ForwardIterator, const T &, const T &, const T &);

int main()
{
   int n, m;
   cin >> n >> m;
   vector<int> v(n);
   for (int i = 0; i < n; ++i)
      cin >> v[i];
   cout << check(v.begin(), v.end(), m, 0, *max_element(v.begin(), v.end()));

   return 0;
}

template <class ForwardIterator, class T>
T cut(ForwardIterator first, ForwardIterator last, const T &val)
{
   T result = 0;
   for (ForwardIterator it = first; it != last; advance(it, 1))
      result += *it / val;
   return result;
}

template <class ForwardIterator, class T>
T check(ForwardIterator first, ForwardIterator last, const T &m, const T &l, const T &r)
{
   if (cut(first, last, r) >= m)
      return r;
   if (r - l == 1)
      return l;
   T mid = (l + r) / 2;
   if (cut(first, last, mid) >= m)
      return check(first, last, m, mid, r);
   return check(first, last, m, l, mid - 1);
}