// https://codeforces.com/contest/1515/problem/B

#include <bits/stdc++.h>

using namespace std;

bool isSquare(int n) {
    int y = sqrt(n);
    return y*y == n;
}

string itsPossible(int n) {
    if (!(n%2) && isSquare(n/2))
        return "YES";
    
    if (!(n%4) && isSquare(n/4))
        return "YES";
    
    return "NO";
}

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t; 
    cin >> t;

    while(t--){
        int n;
        cin >> n; 
        cout << itsPossible(n) << endl;
    }

    return 0;
}
