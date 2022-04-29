// https://codeforces.com/contest/1669/problem/B

#include<bits/stdc++.h>

using namespace std;

int t, n, ai, result;

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;

    while(t--){
        cin >> n;

        int a[n+2];

        result = -1;
        memset(a, 0, sizeof a);
        
        for (int i=0; i<n; i++) {
            cin >> ai;
            a[ai]++;

            if (a[ai] >= 3)
                result = ai;
        }

        cout << result << endl;
    }

    return 0;
}
