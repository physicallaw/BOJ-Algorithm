#include <iostream>
#include <vector>

using namespace std;

bool check(vector<vector<int>> &v, int x, int y, int n)
{
    for (int i = 0; i < 9; ++i)
    {
        if (v[x][i] == n)
            return false;
        if (v[i][y] == n)
            return false;
    }
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < n; ++j)
            if (v[i + x / 3 * 3][j + y / 3 * 3] == n)
                return false;
    return true;
}

int fill(vector<vector<int>> &v)
{
    for (int i = 0; i < 81; ++i)
        if (v[i / 9][i % 9] == 0)
        {
            for (int j = 0; j < 9; ++j)
                if (check(v, i / 9, i % 9, j))
                {
                    v[i / 9][i % 9] = j;
                    if (fill(v))
                        return 1;
                }
            return 0;
        }
    return 1;
}

int main()
{
    vector<vector<int>> v(9, vector<int>(9));
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            cin >> v[i][j];
    fill(v);

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
            cout << v[i][j] << " ";
        cout << "\n";
    }

    return 0;
}