#include <iostream>
#include <queue>

using namespace std;

int getParent(vector<int> &v, int n)
{
    if (v[n] == n)
        return n;
    return v[n] = getParent(v, v[n]);
}

int main()
{
    int n, m, a, b, c;
    int answer = 0;
    cin >> n >> m;
    priority_queue<vector<int>> q;
    vector<int> check(n + 1);
    for (int i = 0; i < n + 1; ++i)
        check[i] = i;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b >> c;
        q.push({-c, a, b});
    }
    while (!q.empty())
    {
        if (getParent(check, q.top()[1]) != getParent(check, q.top()[2]))
        {
            answer -= q.top()[0];
            check[getParent(check, q.top()[2])] = getParent(check, q.top()[1]);
        }
        q.pop();
    }
    cout << answer;

    return 0;
}