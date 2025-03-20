#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m, n1, n2; cin >> n >> m;
    
    n1 = ((n - n % 2) * m) / 2;
    n2 = ((n % 2) * m) / 2;

    cout << n1 + n2 << '\n';
    return 0;
}