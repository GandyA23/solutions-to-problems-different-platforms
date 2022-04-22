// https://codeforces.com/contest/1671/problem/A

#include<bits/stdc++.h>

using namespace std;

int t;
string s;

string checkItsPossible (string s1) {
    int countA = 0;
    int countB = 0;
    int n = s1.size();

    int i = 0;

    while (i < n) {
        while (i < n && s1[i] == 'a') {
            countA++;
            i++;
        }

        while (i < n && s1[i] == 'b') {
            countB++;
            i++;
        }

        if (countA == 1 || countB == 1)
            return "NO";

        countA = countB = 0;
    }

    return "YES";
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> t;

    while(t--) {
        cin >> s;
        cout << checkItsPossible(s) << endl;
    }

    return 0;
} 
