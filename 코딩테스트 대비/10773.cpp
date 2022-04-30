#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        if (temp)
            s.push(temp);
        else
            s.pop();
    }

    int answer = 0;
    while (!s.empty())
    {
        answer += s.top();
        s.pop();
    }
    cout << answer;

    return 0;
}