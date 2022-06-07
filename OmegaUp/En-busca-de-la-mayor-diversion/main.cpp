// https://omegaup.com/arena/problem/edm2021n1-diversion/#problems
#include<bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int div = 0;
    int minDiv = INT_MAX;
    int n; cin >> n;
    int d;
    for (int i=0; i<n; i++) {
        cin >> d;
        div += d;
        if (d < minDiv)
            minDiv = d; 
    }
    div -= minDiv;
    cout << div << endl;

    return 0;
}
