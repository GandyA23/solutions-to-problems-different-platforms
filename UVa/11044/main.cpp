#include<bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        n -= 2;
        m -= 2;
        cout << ((n / 3 + (n % 3 > 0)) * (m / 3 + (m % 3 > 0))) << endl;
    }
    return 0;
}
