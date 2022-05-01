#include <cstdio>
#include <vector>

using namespace std;

int getParent(vector<int> &v, int n)
{
    if (v[n] == n)
        return v[n];
    return v[n] = getParent(v, v[n]);
}

int main()
{
    int n, m, a, b, c;
    scanf("%d%d", &n, &m);
    vector<int> v(n + 1);
    for (int i = 0; i < n + 1; ++i)
        v[i] = i;
    
    for (int i = 0; i < m; ++i)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a)
            if (getParent(v, b) == getParent(v, c))
                printf("YES\n");
            else
                printf("NO\n");
        else
            v[getParent(v, v[c])] = getParent(v, v[b]);
    }

    return 0;
}