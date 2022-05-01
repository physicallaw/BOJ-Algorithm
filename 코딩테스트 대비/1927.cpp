#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    int n, temp;
    scanf("%d", &n);
    priority_queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &temp);
        if (temp)
            q.push(-temp);
        else if (q.empty())
            printf("0\n");
        else
        {
            printf("%d\n", -q.top());
            q.pop();
        }
    }

    return 0;
}