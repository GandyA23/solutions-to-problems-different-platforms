#include<bits/stdc++.h>

using namespace std;

int w;

int main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> w;
    cout << (!(w % 2) && w != 2 ? "SI\n" : "NO\n");
}
