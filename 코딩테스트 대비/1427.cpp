#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.rbegin(), s.rend());
    cout << s;

    return 0;
}