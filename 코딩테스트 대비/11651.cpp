#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool func(vector<int> a, vector<int> b){
    if (a[1] < b[1])
        return true;
    if (a[1] == b[1] and a[0] < b[0])
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int> (2));
    for (int i = 0; i < n; ++i)
        cin >> v[i][0] >> v[i][1];
    sort(v.begin(), v.end(), func);
    for (int i = 0; i < n; ++i)
        cout << v[i][0] << " " << v[i][1] << "\n";

    return 0;
}