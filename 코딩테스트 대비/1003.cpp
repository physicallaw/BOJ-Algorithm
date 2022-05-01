#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    vector<vector<int>> prime = {{1, 0}, {0, 1}};
    while (t--)
    {
        cin >> n;
        while (n + 1 > prime.size())
        {
            int l = prime.size();
            prime.push_back({prime[l - 2][0] + prime[l - 1][0],
                            prime[l - 2][1] + prime[l - 1][1]});
        }
        cout << prime[n][0] << " " << prime[n][1] << "\n";
    }

    return 0;
}