#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dfs(vector<vector<int>> &v, vector<int> &check, int n)
{
    if (check[n])
        return;
    cout << n << " ";
    check[n] = 1;
    for (int i = 0; i < v[n].size(); ++i)
        dfs(v, check, v[n][i]);
}

void bfs(vector<vector<int>> &v, vector<int> &check, int n)
{
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        for (int i = 0; i < v[q.front()].size(); ++i)
            if (check[v[q.front()][i]])
                q.push(v[q.front()][i]);
        if (check[q.front()])
        {
            cout << q.front() << " ";
            check[q.front()] = 0;
        }
        q.pop();
    }
}

int main()
{
    int n, m, k, a, b;
    cin >> n >> m >> k;
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 0; i < n + 1; ++i)
        sort(v[i].begin(), v[i].end());

    vector<int> check(n + 1, 0);
    dfs(v, check, k);
    cout << "\n";
    check = vector<int>(n + 1, 1);
    bfs(v, check, k);

    return 0;
}