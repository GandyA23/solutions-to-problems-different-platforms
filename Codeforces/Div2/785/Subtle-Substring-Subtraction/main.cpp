// https://codeforces.com/contest/1673/problem/A

#include<bits/stdc++.h>

using namespace std;

int intVal (char c) {
    return c-'a'+1;
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        int n = s.size(), alice, bob;
        alice = bob = 0;

        if (n == 1)
            cout << "Bob " << intVal(s[0]) << endl;
        else {
            for (int i=0; i<n; i++)
                alice += intVal(s[i]);

            if (!(n%2))
                cout << "Alice " << alice << endl;
            else {
                bob = s[0] < s[n-1] ? intVal(s[0]) : intVal(s[n-1]);

                alice -= bob;

                if (alice > bob) {
                    cout << "Alice " << alice-bob << endl;
                } else {
                    cout << "Bob " << bob-alice << endl;
                }
            }
        }
        
    }

    return 0;
}
