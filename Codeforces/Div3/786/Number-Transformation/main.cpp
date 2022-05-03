// https://codeforces.com/contest/1674/problem/A

#include<bits/stdc++.h>

using namespace std;

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y ;
        
        if (x > y || y % x) {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        cout << 1 << " " << (int)(y/x) << endl;
    }
    return 0;
}
