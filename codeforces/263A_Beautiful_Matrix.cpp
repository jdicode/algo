#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int x, y;

    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            int n; cin >> n;
            if (n == 1) { x = i; y = j; }
        }

    cout << abs(x - 3) + abs(y - 3) << '\n';
    return 0;
}