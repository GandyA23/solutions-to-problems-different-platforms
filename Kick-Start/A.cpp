#include<bits/stdc++.h>

using namespace std;

int solve () {
    int n, m; cin >> n >> m;
    int candies = 0, c;
    for (int i=0; i<n; i++) {
        cin >> c;
        candies += c;
    }
    return candies % m; 
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    for (int i=1; i<=t; i++)
        cout << "Case #" << i << ": " << solve() << endl;
    return 0;
}
