#include<bits/stdc++.h>

using namespace std;

string solve(int a, int b) {
    if (a > b) return ">";
    if (a < b) return "<";
    return "=";
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        long long int a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    return 0;
}
