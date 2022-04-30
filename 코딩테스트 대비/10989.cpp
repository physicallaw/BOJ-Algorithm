#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n, temp;
    scanf("%d", &n);
    vector<int> v(10001, 0);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &temp);
        ++v[temp];
    }
    for (int i = 0; i < 10001; ++i)
        for (int j = 0; j < v[i]; ++j)
            printf("%d\n", i);

    return 0;
}