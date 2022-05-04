// https://codeforces.com/contest/1674/problem/C

#include<bits/stdc++.h>

using namespace std;

long long int checkCombinations(string s, string t) {
    int m = s.size();
    long long int answ = 1;

    if (t.size() == 1 && t[0] == 'a')
        return 1L;
        
    for (auto a : t)
        if (a == 'a')
            return -1;

    for (int i=0; i<m; i++)
        answ <<= 1;

    return answ;
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        string s, t;
        cin >> s >> t;
        cout << checkCombinations(s, t) << endl;
    }

    return 0;
}
