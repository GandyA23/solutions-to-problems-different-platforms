#include <bits/stdc++.h>

using namespace std;

int n;
int moba[2];
string juego;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n ;

    for (int i=0; i<n; i++) {
        cin >> juego ;
        moba[juego == "DOTA" ? 1 : 0]++;
    }

    cout << "DOTA: " << moba[1] << endl;
    cout << "LOL: " << moba[0] << endl;

    return 0;
}